#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (size_t i = 0; i < input.size(); ++i) {
        char c = input[i];
        if (capitalize && std::islower(c) && i != 0) {
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