#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            result += toupper(str[str.find(c) + 1]);
            str.erase(str.find(c), 1);
        } else if (c != ' ') {
            result += c;
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