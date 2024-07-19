#include <iostream>
#include <vector>

int main() {
    std::vector<char> lst;
    std::cout << "Enter the strings: ";
    char c;
    while((c = getchar()) != '\n') {
        lst.push_back(c);
    }
    bool match_parens = true, open = 0, close = 0;
    for (char c : lst) {
        if (c == '(') open++;
        else if (c == ')') close++;
    }
    return (open == close) ? 0 : -1;
}