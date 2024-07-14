#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            i++; // Skip the '-'
            while (i < s.length() && s[i] == '-') i++;
            if (i < s.length()) {
                result += toupper(s[i]);
            }
        } else if (result.empty()) {
            result += tolower(s[i]);
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                result += s[i];
            } else {
                result += toupper(s[i]);
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