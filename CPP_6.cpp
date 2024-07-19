#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_nested_parens(const std::string& paren_string) {
    std::vector<int> depths;
    int depth = 0;
    for(char c : paren_string) {
        if (c == '(') {
            depth++;
            depths.push_back(depth);
        } else if (c == ')') {
            depth--;
            depths.push_back(depth);
        }
    }
    return depths;
}

#include <cassert>

int main() {
    std::vector<int> a = parse_nested_parens("(()())");
    std::vector<int> b = {1, 2, 1, 2, 1, 1};
    assert(issame(a, b));

    std::vector<int> c = parse_nested_parens("(()(())((())))");
    std::vector<int> d = {1, 2, 2, 3, 3, 2, 3, 4, 5, 4, 4, 3};
    assert(issame(c, d));

    return 0;
}