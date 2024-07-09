#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& input) {
    unsigned char buffer[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)input.c_str(), input.size(), buffer);
    char hash[33]; 
    for(int i = 0 ;i<MD5_DIGEST_LENGTH;i++) 
       sprintf("%02hhx", &buffer[i]);
    return std::string(hash); 
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}