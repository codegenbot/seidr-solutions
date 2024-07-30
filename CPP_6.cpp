#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::string parse_nested_parens(std::string s) {
    int depth = 0, maxDepth = 0;

    for (char c : s) {
        if (c == '(') {
            ++depth;
            maxDepth = std::max(maxDepth, depth);
        } else if (c == ')') {
            --depth;
        }
    }

    return std::to_string(maxDepth);
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}