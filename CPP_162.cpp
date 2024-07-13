#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    string md5Str;
    for(int i = 0 ; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5Str[2*i], "%02x", result[i]);
    }
    
    return md5Str;
}