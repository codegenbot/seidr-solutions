#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0;
    int close = 0;
    for (std::string s : lst) {
        for (char c : s) {
            if (c == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--;
                } else {
                    close++;
                }
            }
        }
    }
    return (open == 0 && close <= 1) ? "Yes" : "No";
}

int main() {
    assert(match_parens({")", "("}) == "Yes");
    return 0;
}