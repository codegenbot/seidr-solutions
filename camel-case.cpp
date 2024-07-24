```cpp
#include <iostream>
#include <cctype>
#include <string>

int main() {
    std::string str = "camel-case example-test-string";
    bool capitalizeNext = true;
    std::string result;

    for (char c : str) {
        if (c == '-') {
            if (!capitalizeNext) {
                result += tolower(c);
            } else {
                result += toupper(c);
                capitalizeNext = false;
            }
        } else {
            if (capitalizeNext) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
            capitalizeNext = true;
        }
    }

    std::cout << result.c_str() << std::endl;

    return 0;
}