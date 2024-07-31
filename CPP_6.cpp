#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> parse_nested_parens(std::string paren_string);

int main() {
    assert(std::issame({1, 2, 3}, {1, 2, 3}));
    assert(!std::issame({1, 2, 3}, {1, 2, 4}));
    assert(!std::issame({1, 2, 3}, {1, 2, 3, 4}));
    
    return 0;
}

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> result;
    int max_depth = 0;
    int current_depth = 0;
    
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