```
#include <iostream>
#include <stack>

bool correct_bracketing(std::string brackets) {
    std::stack<char> st;
    for (auto ch : brackets) {
        if (ch == '(') {
            st.push(ch);
        } else if (ch == ')') {
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}
```