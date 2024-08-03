#include <vector>
#include <cassert>

std::vector<int> parse_nested_parens(const std::string& str) {
    int max_depth = 0;
    int current_depth = 0;
    
    for (char c : str) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) {
                max_depth = current_depth;
            }
        }
        else if (c == ')') {
            current_depth--;
        }
    }
    
    return {max_depth};
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(is_same(parse_nested_parens("(()(())((())))"), {4}));
}