bool check(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') count++;
        else if (c == ')') {
            if (count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    string s1 = lst[0], s2 = lst[1];
    if (check(s1 + s2)) return "Yes";
    if (check(s2 + s1)) return "Yes";
    return "No";
}