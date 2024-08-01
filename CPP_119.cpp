```cpp
#include <iostream>
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    std::cout << match_parens({")", "("}) << std::endl;
    return 0;
}