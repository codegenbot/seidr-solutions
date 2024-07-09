Here is the completed code:

string match_parens(vector<string> lst) {
    stack<char> s;
    for (auto& str : lst) {
        for (char c : str) {
            if (c == '(') {
                s.push(c);
            } else if (c == ')') {
                if (s.empty()) return "No";
                s.pop();
            }
        }
    }
    return s.empty() ? "Yes" : "No";
}