#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += toupper(str[++str.find(c)]);
            str.erase(0, str.find(c) + 1);
        } else if (c != ' ') {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}