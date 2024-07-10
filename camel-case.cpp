#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool isFirst = true;
    for (char c : input) {
        if (c == '-') {
            isFirst = true;
        } else if (isFirst) {
            std::cout << (char)std::toupper(c);
            isFirst = false;
        } else {
            std::cout << c;
        }
    }
    
    return 0;
}