#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5Init(&ctx);
    const char* cstr = text.c_str();
    size_t len = text.length();
    MD5Update(&ctx, cstr, len);
    MD5Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        result.append(buff);
    }

    return result;
}