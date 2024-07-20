#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    int curr_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            curr_depth++;
            max_depth = std::max(max_depth, curr_depth);
        } else if (c == ')') {
            curr_depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            curr_depth = 0;
        }
    }
    result.push_back(max_depth);

    return result;
}