#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const unsigned char *ptr = text.c_str();
    size_t len = text.size();
    MD5_Update(&md5, ptr, len);
    MD5_Final(result, &md5);

    string output;
    for (int i = 0; i < 16; ++i) {
        sprintf(buffer, "%02x", result[i]);
        output += buffer;
    }
    return output;
}