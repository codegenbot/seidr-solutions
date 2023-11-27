#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

std::string string_to_md5(std::string text){
    if (text.empty()) {
        return "None";
    }
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_Digest((const unsigned char*)text.c_str(), text.length(), digest, NULL, EVP_md5(), NULL);
    
    char md5String[33];
    for(int i = 0; i < 16; i++) {
        snprintf(&md5String[i*2], 3, "%02x", (unsigned int)digest[i]);
    }
    
    return std::string(md5String);
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    
    std::string md5Hash = string_to_md5(text);
    std::cout << "MD5 Hash: " << md5Hash << std::endl;
    
    return 0;
}