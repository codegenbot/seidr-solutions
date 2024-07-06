#include <iostream>
#include <string>
#include <iomanip>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char* data = text.c_str();
    int len = text.length();
    MD5_Update(&ctx, reinterpret_cast<void*>(data), len);
    MD5_Final(&ctx, md);

    string result;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md[i]);
        result += oss.str();
    }
    return result;
}