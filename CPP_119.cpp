```cpp
#include <iostream>
#include <string>
#include <vector>

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
    bool result = match_parens(lst);
    std::cout << (result ? "Yes" : "No") << std::endl;
    return 0;
}