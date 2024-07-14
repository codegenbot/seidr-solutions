#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += (result.empty() ? "" : "") + topper(c);
        } else if (c == ' ') {
            continue;
        } else {
            result += tolower(c);
        }
    }
    return result;
}

std::string topper(char c) {
    return toupper(c);
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> str;
        std::cout << "camelCase: " << camelCase(str) << std::endl;
    }
    return 0;
}