```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        // Skip leading whitespace
        if (str.empty()) continue;
        std::string result;
        bool capitalizeNext = true;

        for (char c : str) {
            if (c == '-') {
                capitalizeNext = true;
            } else if (capitalizeNext) {
                result += toupper(c);
                capitalizeNext = false;
            } else {
                result += tolower(c);
            }
        }

        // Print the result and reset for the next line
        std::cout << result << '\n';
    }
    return 0;
}