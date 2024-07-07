#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.length());
    MD5_Final(buffer, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char temp[3];
        sprintf(temp, "%02x", buffer[i]);
        result += temp;
    }
    return result;
}