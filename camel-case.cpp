#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find("-")) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    if (!str.empty()) {
        tokens.push_back(str);
    }

    std::string result;
    for (const auto& token : tokens) {
        if (!result.empty()) {
            result += char(std::toupper(token[0]));
            for (size_t i = 1; i < token.size(); ++i) {
                result += char(std::tolower(token[i]));
            }
        } else {
            for (char c : token) {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string (or 'q' to quit): ";
        std::cin >> str;
        if (str == "q") break;
        std::cout << camelCase(str) << '\n';
    }
    return 0;
}