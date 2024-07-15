#include <iostream>
#include <openssl/md5.h>
#include <cassert>

std::string string_to_md5(const std::string& str) {
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)str.c_str(), str.length(), result);

    std::string md5_str;
    char md5_char[3];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(md5_char, "%02x", result[i]);
        md5_str += md5_char;
    }

    return md5_str;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    
    // Additional test cases can be added here
    
    return 0;
}