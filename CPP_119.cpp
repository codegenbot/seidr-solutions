int match_parens(vector<string> lst) {
    int openCount = 0, closeCount = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') openCount++;
            else if (c == ')') closeCount++;
        }
    }
    return (openCount == closeCount ? "Yes" : "No");
}