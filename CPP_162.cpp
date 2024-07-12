#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&ctx, p, 1);
        p++;
    }
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; i++) {
        char c = (char)(md5[i] >> 4) + (isprint(md5[i]) ? 0 : '%') + (char)(md5[i] & 15);
        if (!isalnum(c)) c = '.';
        result += c;
    }
    return result;
}