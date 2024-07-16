```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            capitalizeNext = true;
        } else {
            if (capitalizeNext) {
                result += toupper(s[i]);
                capitalizeNext = false;
            } else {
                result += tolower(s[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}