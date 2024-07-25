#include <vector>
#include <string>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_nested_parens(const std::string& s) {
    int count = 0;
    std::vector<int> result;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            result.push_back(count);
            count--;
        }
    }
    return result;
}

int main() {
    assert(is_same(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
    return 0;
}