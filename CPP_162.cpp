#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.length());
    MD5_Final(md, &ctx);

    ostring hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(&hash[0], "%02x", md[i]);
    }

    return hash;
}