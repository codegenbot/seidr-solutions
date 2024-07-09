```cpp
#include <iostream>
#include <vector>
#include <string>

int match_parens(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? 1 : 0;
}

int main() {
    std::vector<std::string> lst = {"(abc", "def(", "(ghi", "jkl("};
    int result = match_parens(lst);
    std::cout << "Result: " << (result ? "Yes" : "No") << std::endl;
    return 0;
}