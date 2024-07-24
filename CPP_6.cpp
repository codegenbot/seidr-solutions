#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> parse_nested_parens(const std::string& s) {
    std::vector<int> result;
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
        }
        result.push_back(count);
    }
    return result;
}

int main() {
    assert(issame(std::vector<int>{4}, std::vector<int>{4}));
}