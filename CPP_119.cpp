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
    std::vector<char> lst;
    lst.push_back('(');
    lst.push_back(')');
    bool result = match_parens(lst);
    std::cout << std::boolalpha << result << std::endl;
}