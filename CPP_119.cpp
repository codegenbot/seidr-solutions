```
#include <iostream>
#include <vector>
#include <string>

bool match_parens(const std::vector<std::string>& lst) {
    int countOpen = 0, countClose = 0;

    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') countOpen++;
            else if (c == ')') countClose++;
        }
    }

    return countOpen == countClose;
}

int main() {
    std::vector<std::string> lst = {"(a(b+c))", "(d(e(f(g)))", "((h(i(j))))"};
    if(match_parens(lst)) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;
    return 0;
}