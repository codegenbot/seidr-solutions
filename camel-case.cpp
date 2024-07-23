#include <iostream>
#include <string>

int main() {
    std::string str, finalResult;
    while (std::cin >> str) {
        size_t prevSpace = 0;
        for (size_t i = 0; i < str.size(); ++i) {
            if (str[i] == '-' || str[i] == ' ') { 
                for (char c : str.substr(prevSpace + 1, i - prevSpace - 1)) { 
                    finalResult += tolower(c);
                }
                if (str[i] == ' ') { 
                    finalResult += ' ';
                } else {
                    finalResult += toupper(str[i]);
                }
                prevSpace = i + 1;
            }
        }
        for (char c : str.substr(prevSpace)) { 
            if (!finalResult.empty()) {
                if (c >= 'a' && c <= 'z') {
                    finalResult[0] = toupper(finalResult[0]);
                }
            } else {
                finalResult += tolower(c);
            }
        }
        std::cout << camelCase(finalResult) << std::endl;
        finalResult.clear();
    }
    return 0;
}

std::string camelCase(const std::string& str) {
    if (str.empty()) return str;
    std::string result = tolower(str[0]);
    for (size_t i = 1; i < str.size(); ++i) {
        if (str[i] == '-') {
            result += toupper(str[++i]);
        } else if (str[i] == ' ') {
            result += toupper(str[++i]);
        } else {
            result += str[i];
        }
    }
    return result;
}