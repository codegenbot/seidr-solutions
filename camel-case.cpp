#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += toupper(str[str.find(c) + 1]);
            str.erase(str.find(c), 1);
        } else if (c == ' ') {
            if (!result.empty()) {
                result += toupper(c);
            }
            str.erase(0, 1);
        } else {
            if (!result.empty() && c != '-') {
                result += tolower(c);
            } else {
                result += c;
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