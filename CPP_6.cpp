#include <vector>
#include <cassert>

std::vector<int> parse_nested_parens(const std::string& str) {
    std::vector<int> result;
    int count = 0;

    for (char c : str) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(0);
            }
        }
    }

    return result;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(is_same(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
}