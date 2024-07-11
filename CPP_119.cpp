bool match_parens(vector<string> lst) {
    int open = 0;
    for (const string& s : lst) {
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