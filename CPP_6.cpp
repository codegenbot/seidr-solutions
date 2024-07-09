#include <vector>
#include <string>

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            int depth = 1;
            size_t start_pos = paren_string.find('(');
            while ((start_pos = paren_string.find('(', start_pos + 1)) != std::string::npos) {
                paren_string.erase(start_pos, 1);
                depth++;
            }
            max_depth = depth;
        } else if (c == ')') {
            int depth = 0;
            size_t pos = 0;
            while ((pos = paren_string.find(')', pos)) != std::string::npos) {
                paren_string.erase(0, pos + 1);
                depth++;
            }
            result.push_back(max_depth - depth + 1);
            max_depth = 0;
        }
    }
    return result;
}