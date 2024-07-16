#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            c = ' ';
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += toupper(s[++i]);
        } else {
            result += tolower(s[i]);
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