#include <openssl/ssl.h>
#include <openssl/crypto.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), md);
    
    stringstream ss;
    for(int i = 0 ; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)md[i];
    }
    
    return ss.str();
}