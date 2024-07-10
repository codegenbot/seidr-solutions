#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char temp[3];
        sprintf(temp, "%02x", md5[i]);
        result += temp;
    }
    
    return result;
}