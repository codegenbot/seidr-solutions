```cpp
#include <iostream>
#include <string>

bool match_parens(const std::string& s) {
    int open = 0, close = 0;
    for (char x : s) {
        if (x == '(') open++;
        else if (x == ')') close++;
    }
    return open == close;
}

int main() { 
    std::string line; 
    std::cout << "Enter the strings: ";
    while(std::getline(std::cin, line)) {
        if(line.empty()) break;
        std::string lst = line; // Initialize string
        bool parenthesisMatched = match_parens(lst);
        if (parenthesisMatched) {
            std::cout << "The parentheses are matched." << std::endl;
        } else {
            std::cout << "The parentheses are not matched." << std::endl;
        }
    }
}