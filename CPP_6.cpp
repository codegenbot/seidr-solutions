#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> parse_nested_parens(std::string s) {
    std::vector<int> result;
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
            result.push_back(count);
        } else if (c == ')') {
            count--;
            result.push_back(count);
        }
    }
    return result;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {0, 2, 4}));
    return 0;
}