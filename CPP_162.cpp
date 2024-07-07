#include <openssl/SHA.h>

string string_to_md5(string text) {
    if(text.empty()) return "";
    
    unsigned char md5[16];
    MD5((const unsigned char*)text.c_str(), text.size(), md5);
    
    string result;
    for(int i = 0; i < 16; i++) {
        sprintf(&result[2*i], "%02x", (int)md5[i]);
    }
    
    return result;
}