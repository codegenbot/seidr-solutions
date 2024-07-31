#include <cassert>
#include <vector>
#include <algorithm>
#include <string>

std::vector<int> parse_nested_parens(std::string paren_string, int max_depth = 0, int current_depth = 0) {
    std::vector<int> result;
    
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = std::max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    
    result.push_back(max_depth);
    
    return result;
}