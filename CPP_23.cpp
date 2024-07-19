#include <iostream>
#include <cassert>
#include <cstring>

int customStringLength(const char* str) {
    return strlen(str);
}

int main() {
    const char* userInput;
    std::cin >> userInput;
    int length = customStringLength(userInput);
    std::cout << length << std::endl;
    return 0;
}