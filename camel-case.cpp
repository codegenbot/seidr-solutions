```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += std::toupper(s[i]);
            capitalizeNext = false;
        } else {
            result += s[i];
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