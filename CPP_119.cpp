```cpp
#include <iostream>
#include <string>
#include <sstream>

bool match_parens(const std::string& s) {
    size_t open = 0, close = 0;
    for(char ch : s) { 
        if (ch == '(') open++;
        else if (ch == ')') close++;
    }
    return open == close;
}

int main() { 
    std::string line; 
    while(std::getline(std::cin, line)) { 
        std::istringstream iss(line);
        while(iss >> line) {
            bool parenthesisMatched = match_parens(line);
            if (parenthesisMatched) {
                std::cout << "The parentheses are matched." << std::endl;
            } else {
                std::cout << "Error: The parentheses are not matched. Please enter a valid input." << std::endl;
            }
        }
    }
}