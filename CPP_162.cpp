#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&md5ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md5, &md5ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        result += buff;
    }

    return result;
}