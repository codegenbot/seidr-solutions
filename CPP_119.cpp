```
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
    std::cout << "Enter parentheses sequence: ";
    std::getline(std::cin, input);

    std::vector<char> lst;
    for (char c : input) {
        lst.push_back(c);
    }

    bool result = match_parens(lst);
    
    if(result)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }
    assert(match_parens(std::vector<char> {')', '('}) == true);
}