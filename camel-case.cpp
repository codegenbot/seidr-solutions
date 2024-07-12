#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool nextUpper = true;

    for (char c : str) {
        if (c == '-') {
            nextUpper = true;
        } else if (c == ' ') {
            continue;
        } else {
            if (nextUpper) {
                result += toupper(c);
                nextUpper = false;
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::getline(std::cin, str)) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}