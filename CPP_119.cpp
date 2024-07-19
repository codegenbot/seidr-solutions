```cpp
#include <string>
#include <vector>
#include <iostream>

bool match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close;
}

int main() {
    std::vector<std::string> lst = {"(a)", "(b)", "((c))", "d"};
    std::cout << std::boolalpha << (match_parens(lst) ? "Yes" : "No") << std::endl;
}