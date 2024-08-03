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
        } else {
            c = std::tolower(c);
        }
    }
    
    if (!input.empty())
        input[0] = std::toupper(input[0]); // Capitalize the first letter after processing
    
    std::cout << input << std::endl;
    
    return 0;
}