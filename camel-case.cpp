#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (const auto& word : str.substr(0, str.find(' ')).split '-') {
        if (!result.empty()) {
            result += char(int(result.back()) + 32);
        }
        result += word;
    }
    for (size_t i = str.find(' ') + 1; i < str.size(); ++i) {
        if (str[i] == '-') {
            continue;
        }
        if (!result.empty() && !std::isalnum(str[i])) {
            result.back() = char(int(result.back()) + 32);
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, str);
        if (!str.empty()) {
            break;
        }
    }
    std::cout << "camelCase: " << camelCase(str) << std::endl;
    return 0;
}