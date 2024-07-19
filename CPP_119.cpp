#include <iostream>
#include <vector>

bool match_parens = true;
int open = 0, close = 0;

int main() {
    std::vector<char> lst;
    std::cout << "Enter the strings: ";
    char c;
    while((c = getchar()) != '\n') {
        lst.push_back(c);
    }
    for (char c : lst) {
        if (c == '(') open++;
        else if (c == ')') close++;
    }
    return (open == close) ? 0 : -1;
}