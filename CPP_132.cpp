#include <stack>

bool is_nested(string str) {
    stack<char> stk;
    bool nested = false;

    for (char ch : str) {
        if (ch == '[') {
            stk.push(ch);
        } else if (ch == ']' && !stk.empty()) {
            stk.pop();
            if (!stk.empty()) {
                nested = true;
            }
        }
    }
    
    return nested;
}