#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    bool inWord = false;
    
    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += char(toupper(c));
                inWord = true;
            } else {
                inWord = false;
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!inWord) {
                result += c;
            } else {
                result += char(toupper(c));
                inWord = false;
            }
            firstWord = true;
        } else {
            if (!firstWord || !inWord) {
                result += tolower(c);
                inWord = true;
            } else {
                result += c;
            }
            firstWord = false;
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