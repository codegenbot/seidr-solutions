#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[16];
    unsigned char* p = hash;

    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    int len = text.length();
    MD5_Update(&ctx, str, len);
    MD5_Final(hash, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", hash[i]);
        result += buffer;
    }

    return result;
}