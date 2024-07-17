#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    for (char c : s) {
        if (c == '-') {
            c = ' ';
        } else if (c == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += c;
        } else {
            result += tolower(c);
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