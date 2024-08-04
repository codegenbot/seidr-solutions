#include <vector>
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += std::toupper(c);
            } else {
                result += c;
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += c;
            } else {
                result += std::tolower(c);
                firstWord = true;
            }
        } else {
            if (!firstWord) {
                result += std::toupper(c);
            } else {
                result += std::tolower(c);
            }
            firstWord = false;
        }
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << " ";
    }
    std::cout << std::endl;
    return 0;
}