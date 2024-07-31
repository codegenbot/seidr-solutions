#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string paren_string);

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}