#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    if (str.empty()) return str;

    std::string result;
    for (const auto& c : str) {
        if (c == '-') {
            result += c[1]. toupper();
        } else if (c == ' ') {
            if (!result.empty()) result += std::string(1, c[0]).toupper();
        } else {
            result += c;
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cin >> str;
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}