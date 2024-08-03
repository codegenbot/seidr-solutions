#include <iostream>
#include <string>

std::string camelCase(const std::string &str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            if (!first)
                result.push_back('\0');
            else
                first = false;
        } else if (c == ' ') {
            continue;
        } else {
            if (!first)
                result.push_back(std::toupper(c));
            else
                result += c;
            first = false;
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