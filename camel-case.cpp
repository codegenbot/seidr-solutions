#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            std::cout << (capitalize && c != ' ' ? (char)toupper(c) : (char)tolower(c));
            capitalize = false;
        }
        if (c == ' ') {
            capitalize = true;
            std::cout << " ";
        }
    }
    
    return 0;
}