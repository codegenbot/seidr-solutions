#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    for (char c : str) {
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
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}