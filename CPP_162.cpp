#include <openssl/ssl.h>
#include <openssl/sha.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr != '\0') {
        MD5_Update(&ctx, ptr++, 1);
    }
    MD5_Final(result, &ctx);
    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill(2) << fixed << setw(2) << int(result[i]);
    }
    return ss.str();
}