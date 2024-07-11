#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = false;
    for (char &c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ' && !capitalize) {
            std::cout << (char)tolower(c);
        } else if (c != ' ' && capitalize) {
            capitalize = false;
            std::cout << (char)toupper(c);
        }
    }
    
    return 0;
}