#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result;
    bool nextWordIsUpper = false;

    for (char c : str) {
        if (c == '-') {
            nextWordIsUpper = true;
        } else if (c == ' ') {
            continue;
        } else {
            if (nextWordIsUpper) {
                result += std::toupper(c);
                nextWordIsUpper = false;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string str;
        std::cin >> str;
        std::cout << kebabToCamel(str) << std::endl;
    }

    return 0;
}