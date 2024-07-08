#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input, output;
    std::getline(std::cin, input);
    
    bool capitalize = false;
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c != ' ') {
            if (capitalize) {
                output += std::toupper(c);
                capitalize = false;
            } else {
                output += std::tolower(c);
            }
        }
    }
    
    std::cout << output << std::endl;
    
    return 0;
}