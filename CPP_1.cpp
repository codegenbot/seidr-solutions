bool issame(string s) {
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
    vector<string> result;
    string temp;
    int count = 0;
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                temp += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                temp += c;
            } else if (count == 0) {
                result.push_back(temp);
                temp = "";
            }
        }
    }
    return result;
}

int main() {
    cout << issame("(())()") << endl; // Example usage of the issame function
    // Add more test cases to validate the function if needed
    return 0;
}