#include <iostream>
#include <vector>
#include <string>

bool issame(char a, char b) {
    return (a == 's' && b == 's') || (a == 't' && b == 't');
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            int depth = 1;
            while (paren_string.find('(', paren_string.find('(') + 1) != std::string::npos) {
                paren_string.erase(paren_string.find('('), 1);
                depth++;
            }
            max_depth = std::max(max_depth, depth);
        } else if (c == ')') {
            int depth = 0;
            while (paren_string.find(')', 0) != std::string::npos) {
                size_t pos = paren_string.find(')');
                paren_string.erase(0, pos + 1);
                depth++;
            }
            result.push_back(max_depth - depth);
            max_depth = 0;
        }
    }
    return result;
}