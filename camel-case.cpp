#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNextLetter = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            capitalizeNextLetter = true;
        } else if (capitalizeNextLetter) {
            result += toupper(str[i]);
            capitalizeNextLetter = false;
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        if (!str.empty()) {
            std::cout << camelCase(str) << std::endl;
        }
    }
    return 0;
}