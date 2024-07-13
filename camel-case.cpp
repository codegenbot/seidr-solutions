#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            c = ' ';
        } else if (c == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
        } else {
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