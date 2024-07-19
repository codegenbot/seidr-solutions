#include <iostream>
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    std::vector<std::string> lst;
    // Add your code to read input and store it in 'lst'
    for (const auto& s : lst) {
        std::cout << match_parens(lst) << std::endl;
    }
    return 0;
}