```
#include <iostream>
#include <vector>
#include <string>

bool issame(char c1, char c2) {
    if (c1 == '(' && c2 == ')')
        return true;
    else
        return false;
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            int depth = 1;
            while (true) {
                size_t pos = paren_string.find('(');
                if (pos != std::string::npos)
                    paren_string.erase(0, pos + 1);
                else
                    break;
                depth++;
            }
            max_depth = depth;
        } else if (c == ')') {
            int depth = 0;
            while (true) {
                size_t pos = paren_string.find(')');
                if (pos != std::string::npos)
                    paren_string.erase(0, pos + 1);
                else
                    break;
                depth++;
            }
            result.push_back(max_depth - depth);
            max_depth = 0;
        }
    }
    return result;
}