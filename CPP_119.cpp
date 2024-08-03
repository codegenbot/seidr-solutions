bool match_parens(vector<string> lst) {
    int open = 0;
    int close = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                open++;
            } else {
                if (open == 0) {
                    return false;
                }
                open--;
            }
        }
    }
    return open == 0;
}