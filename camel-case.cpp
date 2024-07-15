#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (i > 0 && i + 1 != s.size()) {
                result += toupper(s[++i]);
            }
        } else if (s[i] == ' ') {
            continue;
        } else {
            if (result.size() > 0) {
                result += toupper(s[i]);
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string s;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, s);
        std::cout << "The camelCase string is: " << camelCase(s) << std::endl;
    }
    return 0;
}