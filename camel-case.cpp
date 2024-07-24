#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++; // skip the '-'
            while (i < str.length() && str[i] == ' ') {
                i++; // skip the spaces
            }
            result += std::toupper(str[i]);
        } else if (str[i] != ' ') {
            if (result.empty()) {
                result = std::tolower(str[i]);
            } else {
                result += std::toupper(str[i]);
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