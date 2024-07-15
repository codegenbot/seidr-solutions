#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
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
                int level = 0;
                for (char p : s) {
                    if (p == '(') {
                        level++;
                    }
                }
                result.push_back(level);
            }
        }
    }
    return result;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
    return 0;
}