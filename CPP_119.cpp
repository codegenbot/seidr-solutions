string match_parens(vector<string> lst) {
    string s = lst[0] + lst[1];
    int open = 0;
    for (char c : s) {
        if (c == '(') {
            open++;
        } else {
            if (open <= 0) {
                return "No";
            }
            open--;
        }
    }
    return open == 0 ? "Yes" : "No";
}