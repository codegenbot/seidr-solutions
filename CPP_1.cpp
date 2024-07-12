bool issame(const string& s) {
    stack<char> st;
    for (char c : s) {
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

vector<string> separate_paren_groups(string paren_string) {
    ...
}

int main() {
    ...
}