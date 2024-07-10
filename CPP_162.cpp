#include <iostream>
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&ctx, p, 1);
        p++;
    }
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        result.push_back(to_string((int)md5[i]).c_str());

    return result;
}