#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> parts;

std::string camelCase(const std::string& str) {
    std::vector<std::string> parts;
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == '-') {
            parts.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }

    std::string result;
    for (const auto& part : parts) {
        if (!result.empty()) {
            result += char(std::toupper(part[0]));
            part.erase(0, 1);
        }
        result += part;
    }
    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    return 0;
}