```cpp
#include <iostream>
#include <string>

bool match_parens(const std::string& str) {
    int open = 0, close = 0;
    for (char x : str) {
        if (x == '(') open++;
        else if (x == ')') close++;
    }
    return open == close;
}

int main() { 
    std::string s;
    std::cout << "Enter the strings: ";
    char c;
    while(std::cin.get(c) && c != '\n') {
        s += c;
    }
    if (match_parens(s)) {
        std::cout << "The parentheses are matched." << std::endl;
    } else {
        std::cout << "The parentheses are not matched." << std::endl;
    }
}