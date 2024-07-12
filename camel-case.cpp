```cpp
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-' || str[i] == ' ') {
            if (str[i] == '-') {
                i++;
            }
            if (!result.empty()) {
                result += std::toupper(str[i]);
            } else {
                result += str[i];
            }
        } else {
            if (i > 0 && (str[i-1] == '-' || str[i-1] == ' ')) {
                result += std::toupper(str[i]);
            } else {
                result += str[i];
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::getline(std::cin, str)) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}