#include <iostream>
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (auto s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    std::vector<std::string> test = {")", "("};
    assert(match_parens(test) == "Yes");
    return 0;
}