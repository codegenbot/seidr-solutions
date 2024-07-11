bool match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--;
                } else {
                    close++;
                }
            }
        }
    }
    return open == close ? "Yes" : "No";
}