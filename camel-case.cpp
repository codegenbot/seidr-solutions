#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str + " ") {
        if (c == '-') {
            result += static_cast<char>(result[0] - ' ');
        } else if (c == ' ') {
            result += ' ';
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