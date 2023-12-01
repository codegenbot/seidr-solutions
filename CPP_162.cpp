#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(std::string text){
    if (text.empty())
        return "None";

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);
    
    char md5hash[32];
    for(int i = 0; i < 16; i++)
        sprintf(&md5hash[i*2], "%02x", (unsigned int)digest[i]);
    
    return std::string(md5hash);
}