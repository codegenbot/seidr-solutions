#include <iostream>
#include <string>
#include <cassert>

size_t getStringLength(const std::string& str) {
    return str.length();
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    size_t length = getStringLength(input);
    std::cout << length << std::endl;
    return 0;
}