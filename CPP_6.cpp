#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::string parse_nested_parens(std::string s) {
    std::string result;
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            ++count;
        }
        else if (c == ')') {
            --count;
        }
        if (count < 0) {
            result += ')';
            count = 0;
        }
    }
    result += std::string(count, ')');
    return result;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}