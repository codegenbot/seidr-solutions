#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int> &v1, const std::vector<int> &v2) {
    return v1 == v2;
}

std::vector<int> parse_nested_parens(std::string paren_string);

int main() {
    // Your main function code here
}

std::vector<int> parse_nested_parens(std::string paren_string) {
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