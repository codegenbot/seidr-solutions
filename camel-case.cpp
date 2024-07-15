```cpp
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool capitalizeNext = true;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (capitalizeNext) {
                result += toupper(str[i + 1]);
                i++;
            } else {
                result += str.substr(i + 1, 1);
            }
            capitalizeNext = true;
        } else if (str[i] != ' ') {
            result += (capitalizeNext ? tolower(str[i]) : toupper(str[i]));
            capitalizeNext = false;
        } else {
            capitalizeNext = true;
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        if (!str.empty()) {
            std::cout << camelCase(str) << std::endl;
        }
    }
    return 0;
}