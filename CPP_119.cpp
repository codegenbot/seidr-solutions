```cpp
#include <iostream>
#include <vector>
#include <string>

bool match_parens(const std::vector<std::string>& lst) {
    bool result = true;
    int countOpen = 0, countClose = 0;

    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') countOpen++;
            else if (c == ')') countClose++;
        }
    }

    if(countOpen != countClose) result = false;

    return result;
}

int main() {
    std::vector<std::string> lst = {"(a(b+c))", "(d(e(f(g)))", "((h(i(j))))"};
    bool result = match_parens(lst);

    std::cout << (result ? "Yes\n" : "No\n");

    return 0;
}