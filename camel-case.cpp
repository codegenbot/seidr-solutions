#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += toupper(str[str.find(c) + 1]);
            str.erase(str.find(c), 1);
        } else if (c != ' ') {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}