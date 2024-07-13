#include <string>
#include <cctype>
#include <iostream>

std::string camelCase(std::string str) {
    std::string result = "";
    while (!str.empty()) {
        size_t pos = str.find(" ");
        if (pos == std::string::npos) {
            pos = str.length();
        }
        char c = toupper(str[0]);
        result += c;
        str.erase(0, 1);
        while (str.find("-") != std::string::npos || !str.empty()) {
            size_t endPos = str.find(" ");
            if (endPos == std::string::npos) {
                endPos = str.length();
            }
            result += tolower(str.substr(0, endPos));
            str.erase(0, endPos);
        }
    }
    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}