#include <iostream>
#include <string>
#include <cassert>
#include <cstring>

#define MD5_DIGEST_LENGTH 16

typedef unsigned int uint32_t;

void MD5(const unsigned char* input, size_t len, unsigned char* output) {
    // Implement the MD5 algorithm here
    // Code implementation of MD5 hash algorithm goes here
}

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }
  
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.length(), digest);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(mdString);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    
    return 0;
}