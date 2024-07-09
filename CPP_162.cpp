#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[16];
    MD5((const unsigned char*)text.c_str(), text.length(), md);
    stringstream ss;
    for(int i=0; i<16; i++){
        ss << hex << setfill('0') << fixed << setw(2) << (int)md[i];
    }
    return ss.str();
}