#include <iostream>
#include <vector>
#include <stack>
#include <string>

std::vector<int> parse_nested_parens(const std::string& str) {
    std::vector<int> result;
    std::stack<char> parentheses;
    
    for (char c : str) {
        if (c == '(') {
            parentheses.push(c);
        } else if (c == ')') {
            while (!parentheses.empty() && parentheses.top() != '(') {
                result.push_back(int(parentheses.pop()) - 4);
            }
            if (!parentheses.empty()) {
                parentheses.pop(); // Remove the '('
            }
        }
    }
    
    return result;
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((()))"), {4, 3, 2, 1, 0, -1, -2, -3, -4}));
    return 0;
}