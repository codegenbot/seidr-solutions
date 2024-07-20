#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool lower = true;

    for (char c : str) {
        if (c == '-') {
            lower = !lower;
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += tolower(c);
            lower = false;
        }
    }

    return result;
}

int main() {
    std::string input = "camel-case example-test-string";
    std::cout << camelCase(input) << std::endl;
    return 0;
}