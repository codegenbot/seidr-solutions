```cpp
#include <iostream>
#include <vector>

bool match_parens(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return open == close;
}

int main() {
    std::vector<std::string> lst = {"(", ")"};
    bool result = match_parens(lst);
    std::cout << std::boolalpha << result << " " << (result ? "Yes" : "No") << std::endl;
}