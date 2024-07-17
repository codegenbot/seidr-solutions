#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += char(toupper(str.find(c) + 1));
        } else if (!result.empty() && !std::isalpha(c)) {
            result[0] = toupper(result[0]);
            result += std::string(1, c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> str;
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}