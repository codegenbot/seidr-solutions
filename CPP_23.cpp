#include <iostream>
#include <string>

int strlen(std::string str) {
    return str.length();
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);
    std::cout << "Length of the string is: " << strlen(input) << std::endl;
    return 0;
}