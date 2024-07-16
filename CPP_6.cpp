#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string paren_string);

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}