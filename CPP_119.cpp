```cpp
#include <vector>
#include <cassert>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    assert(match_parens({{"("}, {")"}}) == "Yes");
    assert(match_parens({{"("}, {"))"}) == "No");
    std::vector<std::string> lst1 = {{"("}};
    std::vector<std::string> lst2 = {")", "("};
    std::cout << match_parens(lst1) << "\n"; 
    std::cout << match_parens(lst2) << "\n"; 
    return 0;
}