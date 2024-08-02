#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (result != "") {
                result += toupper(str[i]);
            } else {
                result += str[i];
            }
        } else if (str[i] != '-') {
            if (result == "") {
                result = tolower(str[i]);
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