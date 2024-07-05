string match_parens(vector<string> lst){
    string s1 = lst[0];
    string s2 = lst[1];

    auto is_balanced = [](const string& s) {
        int balance = 0;
        for (char c : s) {
            if (c == '(') balance++;
            else if (c == ')') balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };

    if (is_balanced(s1 + s2) || is_balanced(s2 + s1)) {
        return "Yes";
    }
    return "No";
}