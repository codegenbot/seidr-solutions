```cpp
#include <iostream>
#include <vector>
#include <string>

bool match_parens(const std::vector<std::string>& lst) {
    int balance = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') {
                balance++;
            } else if (c == ')') {
                if (balance <= 0) return false;
                balance--;
            }
        }
    }
    return balance == 0;
}

int main() {
    std::vector<std::string> lst = {"((()))", "()("};
    if (match_parens(lst)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}