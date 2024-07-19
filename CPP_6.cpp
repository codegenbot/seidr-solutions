#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_nested_parens(const std::string& paren_string) {
    std::vector<int> depths;
    int depth = 0;
    for(char c : paren_string) {
        if (c == '(') {
            depth++;
            depths.push_back(depth);
        } else if (c == ')') {
            depth--;
            depths.push_back(depth);
        }
    }
    return depths;
}
