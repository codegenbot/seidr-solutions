#include <string>
#include <cctype>
#include <iostream>

std::string camelCase(std::string str) {
    std::string result = "";
    size_t pos = 0;

    // Split input string by "-"
    while ((pos = str.find("-")) != std::string::npos) {
        if (!result.empty()) {
            result += std::toupper(str[pos+1]);
        } else {
            result += std::toupper(str.substr(0, pos + 1));
        }
        str.erase(0, pos + 1);
    }

    if (!str.empty())
        result += std::tolower(str);

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}