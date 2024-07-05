string match_parens(vector<string> lst) {
    string a = lst[0];
    string b = lst[1];

    auto is_balanced = [](const string &s) {
        int balance = 0;
        for (char ch : s) {
            if (ch == '(') balance++;
            else if (ch == ')') balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };

    return (is_balanced(a + b) || is_balanced(b + a)) ? "Yes" : "No";
}