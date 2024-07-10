bool match(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count == 0) return false;
            count--;
        }
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    string s1 = lst[0];
    string s2 = lst[1];
    if (match(s1 + s2)) {
        return "Yes";
    } else {
        return "No";
    }
}