#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            continue;
        }
        if (c == ' ') {
            result += char(toupper(c));
            continue;
        }
        if (result.empty()) {
            result = toupper(c);
        } else {
            result += tolower(c);
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