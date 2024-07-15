#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string s) {
    std::vector<int> result;
    int count = 0;
    for (char c : s) {
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

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}