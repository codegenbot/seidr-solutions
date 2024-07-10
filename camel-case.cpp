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
            return result + camelCase(str.substr(1));
        }
        result += c;
    }
    return result;
}

int main() {
    for (;;) {
        std::string str;
        if (!(std::cin >> str)) break;
        std::cout << camelCase(str) << "\n";
    }
    return 0;
}