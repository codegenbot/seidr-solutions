#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool nextWordIsUpper = true;

    for (char c : str) {
        if (c == '-') {
            nextWordIsUpper = true;
        } else if (c == ' ') {
            nextWordIsUpper = true;
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
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;

    return 0;
}