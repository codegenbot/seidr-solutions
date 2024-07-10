#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (c == '-') {
            result += c + c[1].toupper();
        } else if (c == ' ') {
            result += c;
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += c;
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}