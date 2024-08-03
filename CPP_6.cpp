#include <vector>
#include <string>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string str) {
    std::vector<int> depths;
    int depth = 0;
    for (char c : str) {
        if (c == '(') {
            depth++;
        } else if (c == ')') {
            depths.push_back(depth);
            depth--;
        }
    }
    return depths;
}

int main() {
    assert(is_same(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
    return 0;
}