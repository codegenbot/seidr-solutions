#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/sha.h>

std::string string_to_sha(string text) {
    if (text.empty()) return "";
    
    unsigned char sha[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)text.c_str(), text.size(), sha);
    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)sha[i];
    }
    return ss.str();
}