#include <iostream>
#include <string>
#include <cassert>

int my_strlen(const std::string& str) {
    return str.length();
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << my_strlen(input) << std::endl;
    return 0;
}