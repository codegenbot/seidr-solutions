```cpp
#include <iostream>
#include <string>

bool match_parens(const std::string& s) {
    size_t open = 0, close = 0;
    size_t index = 0;
    while(index < s.length()) {
        char ch = s[index];
        if (ch == '(') open++;
        else if (ch == ')') close++;
        index++;
    }
    return open == close;
}

int main() { 
    std::string line; 
    while(std::getline(std::cin, line)) { 
        bool parenthesisMatched = match_parens(line);
        if (parenthesisMatched) {
            std::cout << "The parentheses are matched." << std::endl;
        } else {
            std::cout << "Error: The parentheses are not matched. Please enter a valid input." << std::endl;
        }
    }
}