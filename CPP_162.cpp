#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(result, &ctx);

    string md5Hash;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        md5Hash += buff;
    }
    return md5Hash;
}