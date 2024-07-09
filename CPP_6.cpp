```cpp
#include <vector>
#include <string>

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            int depth = 1;
            size_t pos = 0;
            while ((pos = paren_string.find('(', pos)) != std::string::npos) {
                paren_string.erase(pos, 1);
                depth++;
                pos = pos + 1;
            }
            max_depth = depth;
        } else if (c == ')') {
            int depth = 0;
            size_t pos = 0;
            while ((pos = paren_string.find(')', 0)) != std::string::npos) {
                paren_string.erase(0, pos + 1);
                depth++;
            }
            result.push_back(max_depth - depth);
            max_depth = 0;
        }
    }
    return result;
}