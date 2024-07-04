#include <iostream>
#include <string>
#include <cassert>

size_t getStringLength(const std::string& str) {
    return str.length();
}

int main() {
    std::string userInput;
    std::getline(std::cin, userInput);
    std::cout << getStringLength(userInput) << std::endl;
    return 0;
}