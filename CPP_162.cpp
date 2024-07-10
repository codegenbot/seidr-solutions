#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.length());
    MD5_Final(result, &md5ctx);

    string hash;
    for (int i = 0; i < 16; i++) {
        char c = (char)result[i];
        sprintf(&hash[2*i], "%02x", c);
    }
    
    return hash;
}