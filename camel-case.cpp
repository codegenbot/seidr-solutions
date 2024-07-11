#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize) {
                capitalize = false;
                std::cout << (char)toupper(c);
            } else {
                std::cout << (char)tolower(c);
            }
        }
    }
    
    return 0;
}