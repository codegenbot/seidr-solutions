#include <iostream>
#include <sstream>
#include <iomanip>
#include <string> 
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.size(), md);
    
    std::stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)md[i];
    }
    
    return ss.str();
}