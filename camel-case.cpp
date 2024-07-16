#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            continue;
        }
        if (!result.empty() && !std::isalpha(c)) {
            result[0] = std::toupper(c);
            return result + c;
        }
        result += c;
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