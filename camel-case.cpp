#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == '-') {
            if (result.empty()) {
                // First word, no need to capitalize
            } else {
                result[0] = toupper(str[i]);
            }
            result += str.substr(i + 1);
            break;
        } else if (str[i] != ' ') {
            if (i == 0) {
                // First character of the first word, capitalize it
                result += toupper(str[i]);
            } else {
                result += tolower(str[i]);
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