#include <stack>

bool correct_bracketing(string brackets) {
    stack<char> stk;
    for (char c : brackets) {
        if (c == '(') {
            stk.push(c);
        } else if (c == ')') {
            if (stk.empty()) {
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();
}