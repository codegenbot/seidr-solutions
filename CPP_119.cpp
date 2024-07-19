```cpp
#include <iostream>
#include <string>

bool match_parens(const std::string& s) {
    int open = 0, close = 0;
    for (char ch : s) {
        if (ch == '(') open++;
        else if (ch == ')') close++;
    }
    return open == close;
}

int main() { 
    char ch;
    std::cout << "Enter the strings (or press enter to stop): ";
    std::string line;
    while ((ch = std::cin.get()) != '\n') {
        line += ch;
    }
    if(line.empty()) return 0;
    bool parenthesisMatched = match_parens(line);
    if (parenthesisMatched) {
        std::cout << "The parentheses are matched." << std::endl;
    } else {
        std::cout << "The parentheses are not matched." << std::endl;
    }
}