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
        if(countOpen != countClose) return false;
    }

    return result && (countOpen == countClose);
}

int main() {
    std::vector<std::string> lst = {"(a(b+c))", "(d(e(f(g)))", "((h(i(j))))"};
    bool result = match_parens(lst);
    if (result) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
    return 0;
}