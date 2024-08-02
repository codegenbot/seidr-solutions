#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), md5);
    
    string result;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&result[2*i], "%02x", md5[i]);
    }
    
    return result;
}