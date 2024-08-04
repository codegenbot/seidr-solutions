#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    bool inWord = false;
    
    for (char c : str) {
        if (c == '-') {
            inWord = false;
            continue;
        } else if (c == ' ') {
            if (!inWord) {
                if (!firstWord) {
                    result += std::toupper(c);
                } else {
                    firstWord = false;
                }
            } else {
                result += c;
                inWord = false;
            }
        } else {
            inWord = true;
            if (firstWord) {
                result += tolower(c);
                firstWord = false;
            } else {
                result += std::toupper(c);
            }
        }
    }
    
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}