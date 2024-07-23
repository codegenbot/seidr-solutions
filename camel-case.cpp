#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;
    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while (getline(std::cin, str)) {
        size_t prevSpace = 0;
        for (size_t i = 0; i < str.size(); ++i) {
            if (str[i] == '-') {
                for (char c : str.substr(prevSpace + 1, i - prevSpace - 1)) {
                    result += tolower(c);
                }
                result += toupper(str[i]);
                prevSpace = i + 1;
            }
        }
        for (char c : str.substr(prevSpace)) {
            result += tolower(c);
        }
        std::cout << camelCase(result) << std::endl;
        result.clear();
    }
    return 0;
}