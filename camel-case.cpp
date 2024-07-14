#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool nextUpper = true;
    for (char c : str) {
        if (c == '-') {
            nextUpper = true;
        } else if (c != ' ') {
            if (nextUpper) {
                result += toupper(c);
                nextUpper = false;
            } else {
                result += tolower(c);
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
        if (str.find('-') == std::string::npos) {
            std::cout << "Program did not receive expected input.\n";
            break;
        } else {
            std::cout << camelCase(str) << std::endl;
        }
    }
    return 0;
}