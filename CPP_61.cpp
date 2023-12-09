#include <iostream>
#include <stack>

bool correct_bracketing(std::string brackets) {
    std::stack<char> stack;
    for (auto bracket : brackets) {
        if (bracket == '(') {
            stack.push(bracket);
        } else if (bracket == ')') {
            if (stack.empty()) {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}