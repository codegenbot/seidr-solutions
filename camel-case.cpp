#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalize = true;

    if (s[0] != '-') {
        result += toupper(s[0]);
        capitalize = false;
    } else {
        capitalize = true;
    }

    for (char c : s.substr(1)) {
        if (c == '-') {
            capitalize = true;
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;

    return 0;
}