#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = false;
    for (char &c : input) {
        if (capitalize && std::islower(c)) {
            std::cout << (char)std::toupper(c);
            capitalize = false;
        } else if (c == '-' && !capitalize) {
            capitalize = true;
        } else {
            std::cout << c;
        }
    }
    
    return 0;
}