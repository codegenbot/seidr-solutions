#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (char& c : input) {
        if (c == '-' || c == ' ') {
            capitalize = true;
        } else {
            c = (capitalize) ? std::toupper(c) : std::tolower(c);
            capitalize = false;
        }
    }
    
    if (!input.empty())
        input[0] = std::toupper(input[0]); // Capitalize the first letter
    
    std::cout << input << std::endl;
    
    return 0;
}