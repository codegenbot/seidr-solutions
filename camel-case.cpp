#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            result += c;
        } else if (c == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
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