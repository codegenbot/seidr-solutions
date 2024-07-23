```cpp
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result = "";
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '-') {
            i++;
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            if (!result.empty()) {
                result[0] = std::toupper(s[i]);
            } else {
                result += s[i];
            }
        } else {
            if (!result.empty()) {
                result[0] = std::toupper(result[0]);
            }
            result += s[i];
        }
        i++;
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "camelCase converted string: " << camelCase(str) << std::endl;
    return 0;
}