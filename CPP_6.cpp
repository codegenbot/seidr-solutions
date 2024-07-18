#include <vector>
#include <cassert>

std::vector<int> parse_nested_parens(std::string paren_string);

bool issame(std::vector<int> first, std::vector<int> second) {
    return first == second;
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    int depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            if (depth > max_depth) {
                max_depth = depth;
            }
        } else if (c == ')') {
            depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            depth = 0;
        }
    }

    result.push_back(max_depth);

    return result;
}