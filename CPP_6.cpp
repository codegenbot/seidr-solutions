#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

std::vector<int> parse_nested_parens(string paren_string);

std::vector<int> parse_nested_parens(string paren_string) {
    std::vector<int> depths;
    int max_depth = 0;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            max_depth = std::max(max_depth, depth);
        } else if (c == ')') {
            depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            depth = 0;
        }
    }
    depths.push_back(max_depth);
    return depths;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}