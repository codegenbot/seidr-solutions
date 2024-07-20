#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result;
    bool inWord = false;

    for (char c : str) {
        if (c == '-') {
            inWord = true;
            result += ' ';
        } else {
            if (!inWord) {
                result += tolower(c);
                inWord = true;
            } else {
                result += toupper(c);
            }
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}