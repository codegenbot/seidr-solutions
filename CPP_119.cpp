string match_parens(vector<string> lst) {
    string a = lst[0], b = lst[1];
    auto is_good = [](const string &s) {
        int balance = 0;
        for (char c : s) {
            if (c == '(') balance++;
            else balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };
    if (is_good(a + b) || is_good(b + a)) return "Yes";
    return "No";
}