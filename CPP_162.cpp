#include <string>

#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) MD5_Update(&ctx, ptr, 1);
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(result + strlen(result), "%02x", md[i]);
    }
    
    return result;
}