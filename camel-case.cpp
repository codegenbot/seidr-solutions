```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += c;
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