#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_nested_parens(std::string str) {
    std::vector<int> depths;
    int current_depth = 0;
    
    for (char ch : str) {
        if (ch == '(') {
            current_depth++;
        } else if (ch == ')') {
            depths.push_back(current_depth);
            current_depth--;
        }
    }
    
    return depths;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}