bool match_parens_helper(string s1, string s2) {
    int balance = 0;
    for (char c : s1) {
        if (c == '(') {
            balance++;
        } else {
            balance--;
        }
        if (balance < 0) {
            return false;
        }
    }
    for (char c : s2) {
        if (c == '(') {
            balance++;
        } else {
            balance--;
        }
        if (balance < 0) {
            return false;
        }
    }
    return balance == 0;
}

string match_parens(vector<string> lst) {
    return match_parens_helper(lst[0], lst[1]) || match_parens_helper(lst[1], lst[0]) ? "Yes" : "No";
}