#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool inWord = false;

    for (char c : str) {
        if (c == '-') {
            result += ' ';
            inWord = true;
        } else if (inWord) {
            result += toupper(c);
            inWord = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}