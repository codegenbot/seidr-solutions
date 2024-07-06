#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') close++;
    }
    return open > 0 && close > open;
}

int main() {
    std::string s;
    std::cin >> s;
    if (is_nested(s)) {
        std::cout << "The string is nested.\n";
    } else {
        std::cout << "The string is not nested.\n";
    }
    return 0;
}