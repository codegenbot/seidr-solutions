#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool nextUpper = true;

    for (char c : str) {
        if (c == '-') {
            nextUpper = true;
        } else if (c == ' ') {
            result += '-';
            nextUpper = true;
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
    std::cin >> str;
    std::cout << camelCase(str) << std::endl;
    return 0;
}