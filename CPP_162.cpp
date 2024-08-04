#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& str) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)str.c_str(), str.length(), digest);
    
    char mdString[33];
    for(int i = 0; i < 16; i++)
         snprintf(&mdString[i*2], 16*2, "%02x", (unsigned int)digest[i]);
    
    return std::string(mdString);
}

int main() {
    std::string password = "password";
    std::string expected_hash = "5f4dcc3b5aa765d61d8327deb882cf99";
    
    std::string hashed_password = string_to_md5(password);
    
    assert(hashed_password == expected_hash);
    
    return 0;
}