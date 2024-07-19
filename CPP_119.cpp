```cpp
#include <iostream>
#include <vector>

bool match_parens(const std::vector<char>& lst) {
    int open = 0, close = 0;
    for (char x : lst) {
        if (x == '(') open++;
        else if (x == ')') close++;
    }
    return open == close;
}

int main() { 
    std::cout << "Enter parentheses: "; 
    std::string line; 
    std::vector<char> lst; 
    while (std::getline(std::cin, line) && !line.empty()) { 
        for(char c : line) {
            lst.push_back(c);
        }
    }
    if (match_parens(lst)) {
        std::cout << "The parentheses are matched." << std::endl;
    } else {
        std::cout << "The parentheses are not matched." << std::endl;
    }
}