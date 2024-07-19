```cpp
#include <openssl/md5.h>
#include <iostream>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char md5[16];
    EVP_MD_CTX_final(&ctx);
    string result;

    MD5_Init(&ctx);
    reinterpret_cast<unsigned char*>(text.c_str());
    MD5_Update(&ctx, &text[0], text.size());
    EVP_MD_CTX_final(&ctx);

    for (int i = 0; i < 16; i++) {
        stringstream ss;
        ss << hex << setw(2) << setfill('0') << (int)md5[i];
        result += ss.str();
    }

    return result;
}