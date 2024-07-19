#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string s) {
    int depth = 0;
    int max_depth = 0;

    for (char c : s) {
        if (c == '(') {
            depth++;
            if (depth > max_depth) {
                max_depth = depth;
            }
        } else if (c == ')') {
            depth--;
        }
    }

    return std::vector<int>{max_depth};
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), std::vector<int>({4})));
    return 0;
}