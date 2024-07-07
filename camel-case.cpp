#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (c == '-') {
            result += toupper(c);
        } else if (c == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += c;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << kebabToCamel(s) << std::endl;
    }
    return 0;
}