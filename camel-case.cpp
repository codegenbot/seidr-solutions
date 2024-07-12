```cpp
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-' || str[i] == ' ') {
            if (str[i] == '-') {
                result += std::toupper(str[i+1]);
                i++;
            } else if (str[i] == ' ') {
                continue;
            }
        } else {
            if (!result.empty() && (result.back() == '-' || result.back() == ' ')) {
                result.push_back(std::toupper(str[i]));
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