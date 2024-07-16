```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool nextWord = true;
    for (char c : s) {
        if (c == '-') {
            nextWord = true;
        } else if (nextWord) {
            if (result.empty()) {
                result += std::toupper(c);
            } else {
                result += std::tolower(c);
            }
            nextWord = false;
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