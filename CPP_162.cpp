#include <iostream>
#include <string>
#include <sstream>
#include <openssl/sha.h>

std::string string_to_sha1(std::string text) {
    if (text.empty()) 
        return "";
    
    unsigned char sha[SHA_DIGEST_LENGTH];
    SHA1((unsigned char*)text.c_str(), text.size(), sha);
    std::stringstream ss;
    for (int i = 0; i < SHA_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setfill('0') << std::setw(2) << (int)sha[i];
    }
    return ss.str();
}