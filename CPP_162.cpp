#include <string>
#include <functional>
#include <algorithm>
#include <iostream>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& input) {
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5(input.c_str(), input.length(), result);
    std::string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        output.push_back(int(result[i]) + 0x100);
    return output;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "MD5 of the entered string is: " << string_to_md5(str) << std::endl;
    return 0;
}