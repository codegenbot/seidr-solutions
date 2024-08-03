#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* str = text.c_str();
    size_t len = text.size();
    MD5_Update(&mdContext, str, len);
    MD5_Final(hash, &mdContext);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(result + strlen(result), "%02x", hash[i]);
    }
    return result;
}