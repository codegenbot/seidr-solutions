bool issame(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')' && !st.empty()) {
            st.pop();
        } else {
            return false;
        }
    }
    return st.empty();
}

vector<string> separate_paren_groups(string paren_string);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            } else if (balance == 0) {
                if (issame(current_group)) {
                    result.push_back(current_group);
                }
                current_group = "";
            }
        }
    }

    return result;
}