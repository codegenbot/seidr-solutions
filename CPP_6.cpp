#include <vector>
#include <cassert>

std::vector<int> parse_nested_parens(const std::string& str) {
    int count = 0;
    std::vector<int> result;

    for (char c : str) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(1);
            }
        }
    }

    return result;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(is_same(parse_nested_parens("(()(())((())))"), {4}));
}