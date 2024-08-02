#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool nextWordIsUpper = true;

    for (char c : str) {
        if (c == '-') {
            nextWordIsUpper = true;
        } else if (c == ' ') {
            continue;
        } else if (nextWordIsUpper) {
            result += toupper(c);
            nextWordIsUpper = false;
        } else {
            result += tolower(c);
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