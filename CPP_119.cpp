bool check(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count <= 0) return false;
            count--;
        }
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    string s1 = lst[0];
    string s2 = lst[1];
    int open = 0, close = 0;
    for (char c : s1) {
        if (c == '(') open++;
        else close++;
    }
    for (char c : s2) {
        if (c == '(') close++;
        else open++;
    }
    return check(s1 + s2) ? "Yes" : "No";
}