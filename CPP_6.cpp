#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<int> parse_nested_parens(std::string paren_string);

std::vector<int> parse_nested_parens(std::string paren_string) {
    int depth = 0, max_depth = 0;
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

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}