#include <iostream>
#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int open = 0;
    int close = 0;
    for (const std::string& s : lst) {
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
    std::vector<std::string> lst = {"()", "(())", "())"};
    std::cout << match_parens(lst) << std::endl;
    return 0;
}