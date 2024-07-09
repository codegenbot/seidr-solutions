#include <string>
#include <stack>

bool correct_bracketing(const std::string& s) {
    std::stack<char> st;
    for (char c : s) {
        if (c == '<') {
            st.push(c);
        } else if (c == '>') {
            if (st.empty() || st.top() != '<') {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}