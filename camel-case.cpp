#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            i++; // skip the '-'
            while (i < str.size() && str[i] == ' ') {
                i++; // skip the spaces
            }
            if (result != "") {
                result += std::toupper(str[i]);
            } else {
                result += str[i];
            }
        } else if (str[i] == ' ') {
            continue; // skip the space
        } else {
            if (result != "") {
                result += std::tolower(str[i]);
            } else {
                result += std::toupper(str[i]);
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