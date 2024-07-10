#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-' || c == ' ') {
            if (!capitalizeNext) {
                result += c;
            }
            capitalizeNext = (c == ' ');
        } else {
            if (capitalizeNext) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
            capitalizeNext = false;
        }
    }

    return result;
}

int main() {
    std::cout << camelCase("camel-case example-test-string") << std::endl;
    return 0;
}