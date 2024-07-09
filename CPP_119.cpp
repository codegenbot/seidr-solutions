```
#include <iostream>
#include <vector>
#include <string>

int match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return (open == close) ? 1 : 0;
}

int main() {
    int result = match_parens({{"(())", "()()", "((()))"}});
    std::cout << result << std::endl;
    return 0;
}