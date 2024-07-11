#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> parts = {""};
    for (char c : str) {
        if (c == '-') {
            parts.push_back("");
        } else if (c == ' ') {
            parts.back() += c;
        } else {
            parts.back() += toupper(c);
        }
    }
    std::string result;
    bool first = true;
    for (const auto& part : parts) {
        if (!first) {
            result += " ";
        }
        result += part;
        first = false;
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