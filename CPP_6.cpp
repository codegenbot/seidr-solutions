#include <algorithm>
#include <vector>
#include <stack>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> parse_nested_parens(const std::string& str) {
    std::stack<int> st;
    std::vector<int> res;
    int depth = 0;

    for (char c : str) {
        if (c == '(') {
            depth++;
        } else if (c == ')') {
            res.push_back(depth);
            depth--;
        }
    }

    return res;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}