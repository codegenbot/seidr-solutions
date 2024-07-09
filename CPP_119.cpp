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
    int cnt1 = 0, cnt2 = 0;
    for (char c : s1) {
        if (c == '(') cnt1++;
        else cnt1--;
    }
    for (char c : s2) {
        if (c == '(') cnt2++;
        else cnt2--;
    }
    return check(s1 + s2) ? "Yes" : "No";
}