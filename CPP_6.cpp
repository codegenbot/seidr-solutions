#include <vector>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

assert(is_same(parse_nested_parens("(()(())(()))"), std::vector<int>{4}));