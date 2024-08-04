#include <vector>
#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    
    for (char c : str) {
        if (c == '-') {
            result += char(toupper(c));
        } else if (c == ' ') {
            if (!result.empty()) {
                result.push_back(' ');
            }
        } else {
            if (result.empty() || result.back() != ' ') {
                result += tolower(c);
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