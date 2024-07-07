#include <iostream>
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    assert(match_parens({{"("}, {"})"}) == "Yes");
    std::cout << match_parens({{"(abc)", "(def)"}) << std::endl;
    return 0;
}