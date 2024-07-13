#include <string>
#include <iostream>

std::string camelCase(std::string str) {
    std::string result = "";
    bool isNextUpper = !str.empty();
    for (const auto& c : str) {
        if (c == '-' || c == ' ') {
            if (!isNextUpper) {
                if (c == '-') {
                    if (!result.empty()) {
                        result += std::toupper(c);
                    }
                } else {
                    if (!result.empty() && !isNextUpper) {
                        result += ' ';
                    }
                }
            }
            isNextUpper = true;
        } else {
            isNextUpper = false;
            result += (c >= 'a' && c <= 'z') ? std::toupper(c) : c;
        }
    }
    return result;
}

int main() {
    std::cout << camelCase("camel-case example-test-string") << std::endl;
    return 0;
}