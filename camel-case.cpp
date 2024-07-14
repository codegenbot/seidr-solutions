#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || (str[i] == '-' && str[i + 1] != '-')) {
            if (result.empty()) {
                if (i > 0) result += str.substr(0, i);
            } else {
                result += char toupper(str[i]);
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