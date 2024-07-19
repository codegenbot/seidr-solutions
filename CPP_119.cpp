#include <iostream>
#include <vector>

int balance_parens() {
    std::vector<char> lst;
    std::cout << "Enter the strings: ";
    char c;
    while((c = getchar()) != '\n') {
        lst.push_back(c);
    }
    int open = 0, close = 0;
    for (char x : lst) {
        if (x == '(') open++;
        else if (x == ')') close++;
    }
    return (open == close) ? 0 : -1;
}