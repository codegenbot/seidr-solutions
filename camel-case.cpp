#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char& c : input) {
        if (c == '-' || c == ' ') {
            capitalize = true;
        } else if (capitalize) {
            c = std::toupper(c);
            capitalize = false;
        } else if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }
    
    std::cout << input << std::endl;
    
    return 0;
}