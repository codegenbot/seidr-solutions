#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool nextUpper = true;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            nextUpper = true;
        } else if (str[i] != ' ') {
            if (nextUpper) {
                result += toupper(str[i]);
                nextUpper = false;
            } else {
                result += tolower(str[i]);
            }
        } else {
            nextUpper = true;
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        if (str.find('-') == std::string::npos && !str.empty()) {
            std::cout << "Program did not receive expected input.\n";
            break;
        } else {
            std::cout << camelCase(str) << std::endl;
        }
    }
    return 0;
}