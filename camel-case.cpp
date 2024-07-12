```cpp
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    if (s.empty()) return s;

    std::string result = "";
    bool capitalizeNext = true;
    for (char c : s) {
        if (c == '-') {
            if (!result.empty()) {
                capitalizeNext = true;
                result += ' ';
            }
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
    std::string s;
    while (std::cin >> s) {
        std::cout << kebabToCamel(s) << std::endl;
    }
    return 0;
}