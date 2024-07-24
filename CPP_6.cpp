#include <cassert>
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> parse_nested_parens(std::string s) {
    std::vector<int> result;
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            result.push_back(count);
            count = 0;
        }
    }
    return result;
}

int main() {
    assert(issame(parse_nested_parens("(()(())(()))"), std::vector<int>{4, 2, 1}));
    return 0;
}