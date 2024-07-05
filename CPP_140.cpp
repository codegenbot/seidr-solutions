#include <iostream>
#include <string>

std::string fix_spaces(const std::string &text) {
    std::string result;
    int spaceCount = 0;
    for(char c : text) {
        if(c == ' ') {
            spaceCount++;
        } else {
            if(spaceCount == 1) {
                result += '_';
            } else if(spaceCount > 1) {
                result += '-';
            }
            result += c;
            spaceCount = 0;
        }
    }
    if(spaceCount == 1) {
        result += '_';
    } else if(spaceCount > 1) {
        result += '-';
    }
    return result;
}

int main() {
    std::string text;
    std::getline(std::cin, text);
    std::cout << fix_spaces(text) << std::endl;
    return 0;
}