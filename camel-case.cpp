#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::vector<std::string> parts = {""};
    for (char c : s + " ") {
        if (c == '-') {
            parts.back() += c;
        } else if (c == ' ') {
            parts.push_back("");
        } else {
            parts.back() += c;
        }
    }
    std::string result = "";
    bool first = true;
    for (const auto& part : parts) {
        if (!first) {
            result += std::toupper(part[0]);
            result.erase(0, 1);
        } else {
            result += part;
        }
        first = false;
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << "\n";
    }
    return 0;
}