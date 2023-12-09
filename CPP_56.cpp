#include <iostream>
#include <stack>

bool correct_bracketing(std::string brackets) {
    std::stack<char> stack;
    for (auto& c : brackets) {
        if (c == '<') {
            stack.push(c);
        } else if (c == '>') {
            if (stack.size() == 0) {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}