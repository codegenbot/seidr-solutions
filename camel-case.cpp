#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool inLowercase = true;
    bool isNewWord = true;

    for (char c : str) {
        if (c == '-') {
            isNewWord = true;
        } else {
            result += (isNewWord || inLowercase) ? tolower(c) : toupper(c);
            inLowercase = false;
            isNewWord = false;
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}