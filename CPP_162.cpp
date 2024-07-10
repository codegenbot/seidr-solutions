#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char buffer[1024];
    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* p = text.c_str();
    size_t len = text.length();
    size_t i = 0;
    while (i < len) {
        size_t left = len - i;
        if (left > sizeof(buffer) - 1)
            left = sizeof(buffer) - 1;
        memcpy(buffer, p + i, left);
        buffer[left] = '\0';
        MD5_Update(&md5, buffer, left);
        i += left;
    }
    MD5_Final(result, &md5);
    
    string res = "";
    for (int i = 0; i < 16; ++i) {
        char c = result[i];
        res += (c < 16 ? "0" : "") + hex[c/16] + hex[c%16];
    }
    
    return res;
}