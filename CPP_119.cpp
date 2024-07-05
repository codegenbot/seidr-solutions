string match_parens(vector<string> lst) {
    auto isBalanced = [](const string& s) -> bool {
        int balance = 0;
        for (char c : s) {
            if (c == '(') balance++;
            else if (c == ')') balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };

    string s1 = lst[0] + lst[1];
    string s2 = lst[1] + lst[0];

    if (isBalanced(s1) || isBalanced(s2)) {
        return "Yes";
    }
    return "No";
}