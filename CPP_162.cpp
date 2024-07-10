#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);
    
    string output;
    for (int i = 0; i < 16; ++i)
        sprintf(output + "%02x", &result[i]);
    
    return output;
}