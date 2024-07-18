#include <openssl/md5.h>
#include <string>

std::string string_to_md5(const std::string& text) {
    if(text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    std::string mdString;
    mdString.reserve(32);
  
    for(int i = 0; i < 16; i++) {
        mdString += std::to_string((digest[i] >> 4) & 0xf);
        mdString += std::to_string(digest[i] & 0xf);
    }
  
    return mdString;
}