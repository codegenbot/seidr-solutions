#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, cstr, len);
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result += buf;
    }
    return result;
}