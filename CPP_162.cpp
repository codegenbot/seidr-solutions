#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX md_ctx;
    MD5_Init(&md_ctx);
    const char* str = text.c_str();
    size_t len = text.length();
    MD5_Update(&md_ctx, str, len);
    MD5_Final(md, &md_ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", md[i]);
        result += buff;
    }
    
    return result;
}