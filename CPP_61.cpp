#include <string>
#include <stack>

bool correct_bracketing(const std::string& brackets) {
    std::stack<char> s;
    for (char c : brackets) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            if (s.empty() || s.top() != '(') {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}