#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    for (const auto& c : str) {
        if (c == '-') {
            result.clear();
        } else if (!result.empty() && !std::isalpha(c)) {
            result[0] = std::toupper(result[0]);
            result += c;
        } else {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case (or 'exit' to quit): ";
        std::cin >> str;
        if (str == "exit") break;
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}