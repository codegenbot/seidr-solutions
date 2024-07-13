#include <iostream>
#include <sstream>
#include <string>

char charUpper(char c) {
    return (c >= 'a' && c <= 'z') ? (char)(c + ('A' - 'a')) : c;
}

std::string camelCase(const std::string& input) {
    std::istringstream iss(input);
    std::string word;
    std::string result;

    bool capitalize = true;
    
    while (iss >> word) {
        if (capitalize) {
            result += charUpper(word[0]);
            result += word.substr(1);
            capitalize = false;
        } else {
            result += word;
        }
        
        if (iss.get() != -1 && iss.peek() == '-') {
            iss.ignore();
            capitalize = true;
        }
    }

    return result;
}