#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                result += char(toupper(result[0]));
                result.erase(0, 1);
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