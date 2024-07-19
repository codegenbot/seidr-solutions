```cpp
#include <openssl/md5.h>
#include <iostream>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char md5[16];
    unsigned char *p = NULL;
    string result;

    MD5_Init(&ctx);
    p = reinterpret_cast<unsigned char*>(text.c_str());
    MD5_Update(&ctx, p, text.size());
    EVP_MD_CTX_final(&ctx); // Replace MD5_Final

    for (int i = 0; i < 16; i++) {
        stringstream ss;
        ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(md5[i]);
        result += ss.str();
    }

    return result;
}