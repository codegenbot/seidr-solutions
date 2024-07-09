using namespace std;

string match_parens(vector<string> lst) {
    string s1 = lst[0];
    string s2 = lst[1];
    stack<char> st;
    for (char c : s1 + s2) {
        if (c == '(') {
            st.push(c);
        } else {
            if (st.empty()) {
                return "No";
            }
            st.pop();
        }
    }
    if (!st.empty()) {
        return "No";
    }
    return "Yes";
}