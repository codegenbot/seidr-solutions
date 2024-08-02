#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char& c : input) {
        capitalize = (c == '-' || c == ' ') ? true : capitalize;
        c = (capitalize) ? std::toupper(c) : std::tolower(c);
        capitalize = false;
    }
    
    std::cout << input << std::endl;
    
    return 0;
}