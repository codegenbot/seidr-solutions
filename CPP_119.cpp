#include <vector>
#include <cassert>

int match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return (open == close) ? 1 : 0;
}

int main() {
    assert(match_parens({{"("}, {")"}}) == 1);
    assert(match_parens({{"("}, {"))"}) == 0);
    return 0;
}