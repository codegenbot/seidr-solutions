int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << "MD5 hash: " << md5(input) << std::endl;
    return 0;
}

#include <iostream>
#include <string>
#include <md5.h>

std::string md5(const std::string& str) {
    // implement your MD5 algorithm here
}