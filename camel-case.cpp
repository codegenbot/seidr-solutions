#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == '-' || s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(s[i]);
                result += s.substr(i + 1);
            } else {
                result = s.substr(i);
            }
            break;
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