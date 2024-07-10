#include <iostream>
#include <string>

bool is_nested(const std::string& str) {
    int level = 0;
    bool result = false;

    for (char c : str) {
        if (c == '(') {
            level++;
        } else if (c == ')') {
            if (level > 0) {
                level--;
            }
        }
        if (level > 1) {
            result = true;
            break;
        }
    }

    return level != 0 || result; 
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    if (is_nested(str)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }
    return 0;
}