#include <stack>

bool is_nested(string str) {
    stack<char> s;
    for (char ch : str) {
        if (ch == '[') {
            s.push(ch);
        } else if (ch == ']') {
            if (!s.empty() && s.top() == '[') {
                s.pop();
                if (!s.empty() && s.top() == '[') {
                    return true;
                }
            } else {
                return false;
            }
        }
    }
    return false;
}