#include <vector>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            max_depth++;
        } else if (c == ')') {
            max_depth--;
        }
        result.push_back(max_depth);
    }
    return result;
}