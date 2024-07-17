#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (result != "") {
                result[0] = toupper(result[0]);
            }
            if (i < str.length()) {
                result += tolower(str.substr(i));
                i += str.find(' ', i) - 1;
            }
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}