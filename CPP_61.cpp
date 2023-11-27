#include <stack>

bool correct_bracketing(string brackets) {
    stack<char> st;
    
    for (char c : brackets) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            if (st.empty()) {
                return false;
            }
            st.pop();
        }
    }
    
    return st.empty();
}