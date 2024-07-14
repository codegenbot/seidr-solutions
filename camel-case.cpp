#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // skip the '-'
            while (i < s.size() && s[i] == ' ') {
                i++; // skip the spaces
            }
            if (!result.empty()) {
                result += std::toupper(s[i]);
            } else {
                result += s[i];
            }
        } else if (s[i] != ' ') {
            if (i == 0 || s[i - 1] == '-') {
                result += std::tolower(s[i]);
            } else {
                result += s[i];
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}