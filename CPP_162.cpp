#include <iostream>
#include <string>
#include <cassert>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    assert(!text.empty());

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    char md5_hash[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5_hash[i * 2], "%02x", result[i]);
    }

    return std::string(md5_hash);
}

int main() {
    std::string input;
    std::cout << "Enter a string to convert to MD5 hash: ";
    std::cin >> input;

    std::string md5_hash = string_to_md5(input);
    std::cout << "MD5 hash of the input string: " << md5_hash << std::endl;

    return 0;
}