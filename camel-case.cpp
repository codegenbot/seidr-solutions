#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    bool capitalize = true;
    for (size_t i = 0; i < input.size(); ++i) {
        char c = input[i];
        if (capitalize && std::isalpha(c) && (i == 0 || input[i - 1] == '-')) {
            std::cout << (char)std::toupper(c);
            capitalize = false;
        } else if (c == '-' && std::isalpha(input[i + 1])) {
            capitalize = true;
            std::cout << c;
        } else {
            if (!capitalize) {
                std::cout << (char)std::tolower(c);
            } else {
                std::cout << c;
            }
        }
    }
    
    return 0;
}