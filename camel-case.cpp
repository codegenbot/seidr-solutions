#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char& c : input) {
        if (c == '-' || c == ' ') {
            capitalize = true;
        } else {
            c = (capitalize) ? c : std::toupper(c);
            capitalize = false;
        }
    }
    
    std::cout << input << std::endl;
    
    return 0;
}