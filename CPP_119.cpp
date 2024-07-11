#include <vector>
#include <string>
#include <cassert>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return open == close ? "Yes" : "No";
}

int main() {
    assert(match_parens({")", "("}) == "Yes");
    return 0;
}