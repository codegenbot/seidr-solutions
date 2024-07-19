```cpp
#include <iostream>
#include <vector>

bool match_parens(const std::string& str) {
    int open = 0, close = 0;
    for (char x : str) {
        if (x == '(') open++;
        else if (x == ')') close++;
    }
    return open == close;
}

int main() { 
    std::string line;
    std::cout << "Enter the strings: ";
    line.reserve(1024);  // reserve some memory to avoid reallocation
    while(std::getline(std::cin, line)) {
        line += ' ';  // concatenate lines with a space in between
    }
    if (match_parens(line)) {
        std::cout << "The parentheses are matched." << std::endl;
    } else {
        std::cout << "The parentheses are not matched." << std::endl;
    }
}