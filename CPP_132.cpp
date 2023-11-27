#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool is_nested(string str) {
    stack<char> st;

    for (char c : str) {
        if (c == '[') {
            st.push(c);
        } else if (c == ']') {
            if (!st.empty() && st.top() == '[') {
                st.pop();
            } else {
                return true;
            }
        }
    }

    return false;
}

int main() {
    cout << is_nested("[[]]") << endl;
    cout << is_nested("[]]]]]]][[[[[]") << endl;
    cout << is_nested("[][]") << endl;
    cout << is_nested("[]") << endl;
    cout << is_nested("[[][]]") << endl;
    cout << is_nested("[[]][[") << endl;

    return 0;
}