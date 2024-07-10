#include <string>
#include <stack>

bool correct_bracketing(const std::string& brackets) {
    std::stack<char> s;
    for (char c : brackets) {
        if (c == '(' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == '}') {
            if (s.empty() || (c == ')' && s.top() != '(') || (c == '}' && s.top() != '{')) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty(); // Check if the stack is empty at the end
}