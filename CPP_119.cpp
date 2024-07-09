bool match_parens(const string& s1, const string& s2) {
    int balance = 0;
    for (char c : s1) {
        if (c == '(') balance++;
        else balance--;
    }
    for (char c : s2) {
        if (c == '(') balance++;
        else balance--;
    }
    return balance == 0;
}

string match_parens(vector<string> lst) {
    return match_parens(lst[0], lst[1]) ? "Yes" : "No";
}