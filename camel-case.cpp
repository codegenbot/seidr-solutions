#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (i > 0 && str[i-1] != ' ') {
                result += toupper(str.substr(i+1, 1));
                i++;
            }
        } else if (str[i] == ' ') {
            if (!result.empty()) {
                result += toupper(str.substr(i+1, 1));
                i++;
            }
        } else {
            if (i > 0 && str[i-1] != '-') {
                result += tolower(str[i]);
            } else {
                result += toupper(str[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}