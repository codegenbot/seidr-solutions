#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool nextUpper = true;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (!nextUpper) {
                result += str[i + 1];
                i++;
            } else {
                result += toupper(str[i + 1]);
                i++;
            }
            nextUpper = true;
        } else if (str[i] != ' ') {
            if (nextUpper) {
                result += tolower(str[i]);
                nextUpper = false;
            } else {
                result += str[i];
            }
        } else {
            nextUpper = true;
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        if (str.length() > 0 && str[0] != '-') {
            std::cout << "Program did not receive expected input" << std::endl;
            break;
        }
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}