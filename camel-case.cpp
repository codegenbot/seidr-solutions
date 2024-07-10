#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == '-') {
            if (result.length() > 0) {
                result[0] = toupper(result[0]);
            }
            if (i < str.length()) {
                result += toupper(str.substr(i));
                i += str.substr(i).find(' ') - 1;
            } else {
                break;
            }
        } else {
            if (result.length() > 0 && str[i] != '-') {
                result += tolower(str[i]);
            } else {
                result += str[i];
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