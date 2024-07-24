#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> parts;
    size_t start = 0;

    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == ' ') {
            parts.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;

    for (const auto& part : parts) {
        if (!result.empty()) {
            result += std::toupper(part[0]);
            result.erase(1, 1);
        } else {
            result += part;
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