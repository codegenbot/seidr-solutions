#include <vector>
#include <string>

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            int depth = 1;
            size_t pos = paren_string.find('(', paren_string.find('(') + 1);
            while (pos != std::string::npos) {
                paren_string.erase(pos, 1);
                depth++;
                pos = paren_string.find('(', pos + 1);
            }
            max_depth = depth;
        } else if (c == ')') {
            int depth = 0;
            size_t pos = 0;
            while ((pos = paren_string.find(')', pos)) != std::string::npos) {
                size_t temp_pos = pos + 1;
                paren_string.erase(0, temp_pos);
                depth++;
                pos = temp_pos;
            }
            result.push_back(max_depth - depth);
        }
    }
    return result;
}