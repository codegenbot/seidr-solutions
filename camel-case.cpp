#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || (str[i] == '-' && i > 0)) {
            if (result.empty()) {
                result = tolower(str.substr(0, i));
            } else {
                result += toupper(str[i]);
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while(std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}