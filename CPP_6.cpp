#include <vector>
#include <string>
#include <cassert>
#include <algorithm> // for std::max

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> depths;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            depths.push_back(depth);
        } else if (c == ')') {
            depth--;
        }
    }
    int max_depth = 0;
    for (int d : depths) {
        max_depth = std::max(max_depth, d);
    }
    return depths;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}