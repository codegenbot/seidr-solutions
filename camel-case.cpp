#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool first = true;
    for (char c : input) {
        if (c == '-') {
            std::cout << "";
            first = true;
        } else if (c == ' ') {
            std::cout << ' ';
            first = true;
        } else {
            if (first) {
                std::cout << (char)toupper(c);
                first = false;
            } else {
                std::cout << c;
            }
        }
    }
    
    return 0;
}