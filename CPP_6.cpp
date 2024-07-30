#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::string parse_nested_parens(std::string s) {
    int count = 0;
    std::string result = "";

    for (char c : s) {
        if (c == '(') {
            count++;
            result += '(';
        } else if (c == ')' && count > 0) {
            count--;
            result += ')';
        }
    }

    return result;
}