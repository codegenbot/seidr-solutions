#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            result += toupper(str[i + 1]) + str.substr(i + 2).erase(0, 1);
            i++;
        } else if (str[i] == ' ') {
            result += toupper(str[i + 1]);
            i++;
        } else {
            result += tolower(str[i]);
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