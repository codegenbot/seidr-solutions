int match_parens(vector<string> lst) {
    int open = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') {
                if (open <= 0) return 0;
                open--;
            }
        }
    }
    return open == 0 ? 1 : 0;
}