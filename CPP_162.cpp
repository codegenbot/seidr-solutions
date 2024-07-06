#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "";
    }
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.size(), md5);
    
    std::stringstream ss;
    for(int i = 0 ; i < MD5_DIGEST_LENGTH; i++) {
        ss << std::setfill('0') << std::setw(2) << std::hex << (int)md5[i];
    }
    
    return ss.str();
}