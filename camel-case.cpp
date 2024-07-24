```cpp
#include <string>
#include <cctype>
#include <iostream>

int main() {
    std::string str = "camel-case example-test-string";
    std::cout << camelCase(str) << std::endl;
    return 0;
}

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-' || c == ' ') {
            if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += c;
            }
        } else {
            result += (capitalizeNext ? toupper : tolower)(c);
            capitalizeNext = true;
        }
    }

    return result;
}