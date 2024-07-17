#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.length() && s[i] == ' ') {
                i++; // skip the spaces
            }
            result += std::toupper(s[i]);
        } else if (s[i] != ' ') {
            if (!result.empty()) {
                result += std::tolower(s[i]);
            } else {
                result += std::toupper(s[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}