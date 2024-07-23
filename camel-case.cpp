```cpp
#include <iostream>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

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
                    finalResult.insert(0, 1, toupper(c));
                }
            } else {
                finalResult += tolower(c);
            }
        }
        std::cout << camelCase(finalResult) << std::endl;
        finalResult = "";
    }
    return 0;
}