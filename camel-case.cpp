#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    bool isFirstChar = true;

    for (char &c : input) {
        if (capitalize && std::isalpha(c) && std::islower(c) && !isFirstChar) {
            std::cout << (char)std::toupper(c);
            capitalize = false;
        } else if (c == '-' && std::isalpha(c)) {
            capitalize = true;
            std::cout << c;
        } else {
            if (!capitalize) {
                std::cout << (char)std::tolower(c);
            } else {
                std::cout << c;
            }
        }
        isFirstChar = false;
    }
    
    return 0;
}