#include <iostream>
#include <vector>
#include <string>
#include <assert.h>

bool match_parens(const std::vector<std::string>& input) {
    int open = 0, close = 0;
    for (const auto& s : input) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return open == close;
}

int main() {
    std::vector<std::string> lst = {"(a(b+c))", "(d(e(f(g)))", "((h(i(j))))"};
    bool result = match_parens(lst);

    if(result) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;

    assert(match_parens({")", "("}) == true);
    
    return 0;
}