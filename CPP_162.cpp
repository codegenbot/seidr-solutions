#include <iostream>
#include <cassert>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    assert(!text.empty());
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for(int i = 0; i < 16; i++){
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }
    mdString[32] = '\0';

    return std::string(mdString);
}