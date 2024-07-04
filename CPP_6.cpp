#include <vector>
#include <string>
#include <cassert>
#include <iostream>

std::vector<int> parse_nested_parens(const std::string& paren_string) {
    std::vector<int> result;
    int max_depth = 0, current_depth = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) {
                max_depth = current_depth;
            }
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {  
            result.push_back(max_depth);
            max_depth = 0;
        }
    }
    
    if(!paren_string.empty() && paren_string.back() != ' ') {
        result.push_back(max_depth);
    }

    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((()))) "), {4}));
    assert(issame(parse_nested_parens("() () "), {1, 1}));
    assert(issame(parse_nested_parens("() ((())) (()()) "), {1, 3, 2}));
    
    std::cout << "All tests passed!" << std::endl;
    return 0;
}