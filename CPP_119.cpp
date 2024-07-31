bool match_parens_helper(string str) {
    int balance = 0;
    for (char c : str) {
        if (c == '(') {
            balance++;
        } else {
            if (balance == 0) {
                return false;
            }
            balance--;
        }
    }
    return balance == 0;
}

string match_parens(vector<string> lst) {
    string concat = lst[0] + lst[1];
    return match_parens_helper(concat) ? "Yes" : "No";
}