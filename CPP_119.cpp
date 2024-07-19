bool check_balance(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') count++;
        else if (c == ')') count--;
        if (count < 0) return false;
    }
    return count == 0;
}

string match_parens(vector<string> lst) {
    string left = lst[0], right = lst[1];
    if (check_balance(left + right)) return "Yes";
    if (check_balance(right + left)) return "Yes";
    return "No";
}