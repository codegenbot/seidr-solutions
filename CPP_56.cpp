#include <string>
#include <cassert>
#include <stack>

bool correct_bracketing(const std::string& brackets) {
    std::stack<char> stack;
    
    for (char c : brackets) {
        if (c == '>' || c == ']') {
            if (stack.empty()) {
                return false;
            }
            char top = stack.top();
            if ((top == '<' && c == '>') || (top == '[' && c == ']')) {
                stack.pop();
            } else {
                return false;
            }
        } else if (c == '<' || c == '[') {
            stack.push(c);
        }
    }
    
    return stack.empty();
}