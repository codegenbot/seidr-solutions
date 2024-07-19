```cpp
#include <iostream>
#include <string>

bool match_parens(const std::string& s) {
    int open = 0;
    for (char ch : s) {
        if (ch == '(') open++;
        else if (ch == ')') {
            if (open > 0) open--;
            else return false; // unmatched close parenthesis
        }
    }
    return open == 0;
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