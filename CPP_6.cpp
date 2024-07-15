#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_nested_parens(std::string s) {
    std::vector<int> result;
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(count + 1);
            }
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}