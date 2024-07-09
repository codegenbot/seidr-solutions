#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& input) {
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5(input.c_str(), input.size(), result);
    char hash[33];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&hash[i*2], "%02x", result[i]);
    }
    return std::string(hash);
}

int main() {
    std::cout << string_to_md5("Hello, World!") << std::endl;
    return 0;
}