#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.length();
    MD5_Update(&ctx, str, len);
    MD5_Final(result, &ctx);

    string hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << (int)result[i];
        hash += ss.str();
    }
    return hash;
}