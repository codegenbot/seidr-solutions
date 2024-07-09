#include <iostream>
#include <sstream>
#include <string>
#include <openssl/sha.h>

std::string string_to_sha1(std::string text) {
    if (text.empty()) return "";
    
    unsigned char sha[SHA_DIGEST_LENGTH];
    SHA1((unsigned char*)text.c_str(), text.size(), sha);
    std::stringstream ss;
    for (int i = 0; i < SHA_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)sha[i];
    }
    return ss.str();
}