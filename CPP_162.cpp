#include <string>
#include <sstream>
#include <openssl/md5.h>

std::string string_to_sha1(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md[SHA_DIGEST_LENGTH];
    SHA1((unsigned char*)text.c_str(), text.size(), md);
    std::stringstream ss;
    for (int i = 0; i < SHA_DIGEST_LENGTH; i++) {
        hexdump(md[i], 2, &ss);
    }
    return ss.str();
}