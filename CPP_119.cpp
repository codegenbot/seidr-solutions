#include <iostream>
#include <vector>
#include <string>

std::string match_parens(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (auto c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    std::vector<std::string> lst = {"hello((world)}", "another"};
    std::cout << match_parens(lst) << std::endl;
    return 0;
}