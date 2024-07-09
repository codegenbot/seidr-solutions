int match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const auto &str : lst) {
        for (char c : str) {
            if (c == '(') {
                open++;
            } else if (c == ')') {
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