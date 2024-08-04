#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    bool insideWords = false;
    
    for (char c : str) {
        if (c == '-') {
            insideWords = true;
        } else if (c == ' ') {
            if (insideWords) {
                result += char(toupper(c));
            } else {
                result += ' ';
            }
            insideWords = false;
        } else {
            if (!firstWord && !insideWords) {
                result += c;
            } else if (!firstWord) {
                result += toupper(c);
            } else {
                result += tolower(c);
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