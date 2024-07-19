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
    std::vector<char> lst;
    std::cout << "Enter the strings: ";
    char c;
    while(std::cin.get(c)) {
        if(c != '\n')
            lst.push_back(c);
        else
            break;
    }
    if (match_parens(lst)) {
        std::cout << "The parentheses are matched." << std::endl;
    } else {
        std::cout << "The parentheses are not matched." << std::endl;
    }
    return 0;
}