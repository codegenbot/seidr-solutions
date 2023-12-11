#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(const std::string& kebabCase) {
    std::string camelCase;
    bool capitalizeNext = false;
    
    for (char c : kebabCase) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            camelCase += std::toupper(c);
            capitalizeNext = false;
        } else {
            camelCase += c;
        }
    }
    
    return camelCase;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string output;
    std::string word;
    
    for (char c : input) {
        if (c == ' ') {
            output += kebabToCamel(word) + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    output += kebabToCamel(word);
    
    std::cout << output << std::endl;
    
    return 0;
}