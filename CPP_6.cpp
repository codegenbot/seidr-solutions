#include <vector>
#include <cassert>
#include <string>
#include <algorithm>

std::vector<int> parse_nested_parens(std::string s) {
    int depth = 0;
    std::vector<int> depths;
    for (char c : s) {
        if (c == '(') {
            depth++;
        } else if (c == ')') {
            depth--;
        }
        depths.push_back(depth);
    }
    std::vector<int> result;
    int max_depth = *std::max_element(depths.begin(), depths.end());
    for (int d : depths) {
        if (d == max_depth) {
            result.push_back(d);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())(()))"), {4}));
    return 0;
}