#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool is_same_vector(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string s) {
    std::vector<int> result;
    int count = 1;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(count);
            }
        }
    }
    return result;
}

int main() {
    assert(is_same_vector(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
    return 0;
}