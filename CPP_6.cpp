#include <vector>
#include <cassert>
#include <algorithm>
#include <string>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_nested_parens(const std::string& paren_string) {
    std::vector<int> depths;
    int max_depth = 0;
    int current_depth = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = std::max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    
    depths.push_back(max_depth);
    
    return depths;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));

    return 0;
}