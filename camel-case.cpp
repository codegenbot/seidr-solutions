#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            int i = str.find(c);
            result += str.substr(0, i).at(i - 1). toupper();
            str.erase(0, i + 1);
        } else if (c == ' ') {
            int i = str.find(c);
            result += str.substr(0, i).at(i - 1).toupper();
            str.erase(0, i + 1);
        }
    }
    result += str;
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}