#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int> &a, const std::vector<int> &b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> depths;
    int depth = 0;
    int max_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            max_depth = std::max(max_depth, depth);
        } else if (c == ')') {
            depth--;
        }
    }

    return {max_depth};
}

assert(issame(parse_nested_parens("(()(())((())))"), {4}));
return 0;