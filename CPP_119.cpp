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
    std::string line; 
    std::cout << "Enter the strings: ";
    while(getline(cin, line)) {
        auto pos = line.find('(');
        while (pos != std::string::npos) {
            line = std::string(line.begin() + pos + 1, line.end()); // Add 1 to skip the '(' character
            pos = line.find('('); // Continue searching for '(' until no more found
        }
        bool parenthesisMatched = match_parens(line);
        if (parenthesisMatched) {
            std::cout << "The parentheses are matched." << std::endl;
        } else {
            std::cout << "The parentheses are not matched." << std::endl;
        }
    }
}