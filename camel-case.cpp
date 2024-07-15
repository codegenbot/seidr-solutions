#include <iostream>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string result = "";
    bool capitalize = false;
    
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c == ' ') {
            capitalize = false;
            result += c;
        } else {
            if (capitalize) {
                result += std::toupper(c);
            } else {
                result += c;
            }
            capitalize = false;
        }
    }
    
    std::cout << result << std::endl;
    
    return 0;
}