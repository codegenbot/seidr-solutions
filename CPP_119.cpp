bool balance(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') count++;
        else if (c == ')') count--;
        if (count < 0) return false;
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    string s1 = lst[0], s2 = lst[1];
    int open = 0, close = 0;
    for (char c : s1) {
        if (c == '(') open++;
        else if (c == ')') close++;
    }
    for (char c : s2) {
        if (c == '(') close++;
        else if (c == ')') open--;
    }
    return balance(s1 + s2) ? "Yes" : "No";
}