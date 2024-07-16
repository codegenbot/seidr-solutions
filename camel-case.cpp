#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (i > 0) {
                result += topper(str.substr(i - str.find('-') + 1));
            }
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}

std::string topper(std::string s) {
    return (s.empty() ? "" : (s[0] >= 'A' && s[0] <= 'Z') ? s : std::string(1, (char)(s[0] - 32)) + s.substr(1));
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << '\n';
    }
    return 0;
}