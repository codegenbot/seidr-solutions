#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : str) {
        if (c == '-') {
            result += c + ((firstWord) ? "" : " ");
            firstWord = false;
        } else if (c == ' ') {
            result += c;
            firstWord = true;
        } else {
            result += toupper(c);
        }
    }
    
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    std::cout << camelCase(str) << std::endl;
    return 0;
}