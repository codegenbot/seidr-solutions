#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || (s[i] == '-' && s[i + 1] != '-')) {
            if (result.length()) {
                result[0] = toupper(result[0]);
            }
            size_t pos = s.find('-');
            if (pos != std::string::npos) {
                result += s.substr(0, pos);
                s.erase(0, pos + 1);
            } else {
                result += s;
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << '\n';
    }
    return 0;
}