#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = false;
    for (char &c : input) {
        if (std::isalpha(c) && std::islower(c) && capitalize) {
            std::cout << (char)std::toupper(c);
            capitalize = false;
        } else if (c == '-') {
            capitalize = true;
            std::cout << c;
        } else {
            if (!capitalize) {
                std::cout << (char)std::tolower(c);
            } else {
                std::cout << c;
            }
        }
    }
    
    return 0;
}