#include <iostream>
#include <cassert>

std::string fix_spaces(std::string str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            str[i] = '_';
        }
    }
    return str;
}

#ifndef TESTING
int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << fix_spaces(input) << std::endl;
    return 0;
}
#endif