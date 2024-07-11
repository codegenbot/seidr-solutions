#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += char(toupper(str[str.find(c) + 1]));
            str.erase(str.find(c), 1);
        } else if (c == ' ') {
            result += char(toupper(c));
            str.erase(0, 1);
        } else {
            result += c;
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