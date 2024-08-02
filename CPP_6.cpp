#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> depths;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            depths.push_back(depth);
        } else if (c == ')') {
            depth--;
        }
    }
    int max_depth = 0;
    for (int d : depths) {
        max_depth = std::max(max_depth, d);
    }
    return depths;
}