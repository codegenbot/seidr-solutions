int countOpen(string s) {
    int open = 0;
    for (char c : s) {
        if (c == '(')
            open++;
        else
            open--;
    }
    return open;
}

string match_parens(vector<string> lst) {
    string s1 = lst[0], s2 = lst[1];
    int openCount = countOpen(s1 + s2);
    return openCount == 0 ? "Yes" : "No";
}