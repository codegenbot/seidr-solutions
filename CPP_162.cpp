#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& str) {
    unsigned char buffer[16];
    MD5((const unsigned char*)str.c_str(), str.size(), buffer);
    std::stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << std::setfill('0') << std::setw(2) << std::hex << (int)buffer[i];
    }
    return ss.str();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "MD5 hash: " << string_to_md5(input) << std::endl;
    return 0;
}