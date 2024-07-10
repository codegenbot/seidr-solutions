#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string input) {
    std::vector<int> result;
    int count = 0;
    for (char c : input) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.back()++;
            }
        }
    }
    return result;
}