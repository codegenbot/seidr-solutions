#include <iostream>
#include <stack>

bool correct_bracketing(string brackets) {
    stack<char> st;
    for (char bracket : brackets) {
        if (bracket == '(') {
            st.push(bracket);
        } else if (bracket == ')') {
            if (st.empty()) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}