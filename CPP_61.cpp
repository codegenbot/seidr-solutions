#include <iostream>
#include <stack>
#include <string>

bool correct_bracketing(string brackets) {
    stack<char> st;
    
    for (char c : brackets) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            if (st.empty() || st.top() != '(') {
                return false;
            }
            st.pop();
        }
    }
    
    return st.empty();
}

int main() {
    string brackets;
    cin >> brackets;
    
    if (correct_bracketing(brackets)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}