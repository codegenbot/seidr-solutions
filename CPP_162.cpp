#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), md);
    string ret;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) 
        ret.push_back( int2hex(md[i]));
    return ret;
}

string int2hex(unsigned char i) {
    static char hex[]="0123456789abcdef";
    return &hex[i%16];
}