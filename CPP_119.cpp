bool check(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') count++;
        else if (count > 0) count--;
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    string a = lst[0], b = lst[1];
    if (check(a + b)) return "Yes";
    if (check(b + a)) return "Yes";
    return "No";
}