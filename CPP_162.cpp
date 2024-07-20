#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, cstr, len);
    MD5_Final(result, &ctx);

    string output;
    for (int i = 0; i < 16; i++) {
        char buf[3];
        sprintf(buf, "%02x", result[i]);
        output += buf;
    }
    return output;
}