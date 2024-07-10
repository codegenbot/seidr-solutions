#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result[0] -= 32; // convert to upper case
            }
            continue;
        }
        if (c == ' ') {
            continue;
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