#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(std::string str) {
    std::string result;
    int i = 0;
    while (i < str.size()) {
        if (str[i] == '-') {
            ++i;
            while (i < str.size() && str[i] != ' ') {
                result += toupper(str[i]);
                ++i;
            }
            if (result.back() != ' ')
                result.push_back(' ');
        } else
            result += tolower(str[i]);
        ++i;
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}