#include <iostream>
#include <vector>

bool match_parens(const std::vector<char>& lst) {
    int open = 0, close = 0;
    for (char c : lst) {
        if (c == '(') open++;
        else if (c == ')') close++;
    }
    return open == close;
}

int main() {
    std::string input;
    std::cout << "Enter a string with parentheses: ";
    std::getline(std::cin, input);
    
    bool result = match_parens({input.begin(), input.end()});
    if (result) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}