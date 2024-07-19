```cpp
#include <iostream>
#include <string>

bool match_parens(const std::string& s, std::string &output) {
    size_t open = 0;
    for (char c : s) {
        if (c == '(') {
            open++;
            output.push_back('(');
        } else if (c == ')') {
            if (open > 0) {
                open--;
                output.push_back(')');
            } else return false; // unbalanced closing parenthesis
        }
    }
    return open == 0;
}

int main() { 
    std::string line, output = "";
    while(std::getline(std::cin, line)) { 
        bool parenthesisMatched = match_parens(line, output);
        if (parenthesisMatched) {
            std::cout << "The parentheses are matched." << std::endl;
        } else {
            std::cout << "Error: The parentheses are not matched. Please enter a valid input." << std::endl;
        }
    }
}