int countParens(const string& s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else {
            balance--;
        }
    }
    return balance;
}

string match_parens(vector<string> lst) {
    int balance = countParens(lst[0]) + countParens(lst[1]);
    return (balance == 0) ? "Yes" : "No";
}