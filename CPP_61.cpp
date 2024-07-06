#include <stack>

bool correct_bracketing(string brackets) {
    stack<char> bracketStack;

    for (char bracket : brackets) {
        if (bracket == '(') {
            bracketStack.push(bracket);
        } else if (bracket == ')') {
            if (bracketStack.empty()) {
                return false;
            }
            bracketStack.pop();
        }
    }

    return bracketStack.empty();
}