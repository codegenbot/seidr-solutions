#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char buffer[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, str, len);
    MD5_Final(buffer, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", buffer[i]);
        result += string(buf);
    }
    return result;
}