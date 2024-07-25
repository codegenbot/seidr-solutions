#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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
    assert(issame(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
    return 0;
}