string match_parens(vector<string> lst) {
    auto is_balanced = [](const string& s) {
        int balance = 0;
        for(char c : s) {
            if(c == '(') balance++;
            else balance--;
            if(balance < 0) return false;
        }
        return balance == 0;
    };

    string s1 = lst[0], s2 = lst[1];
    if(is_balanced(s1 + s2) || is_balanced(s2 + s1)) return "Yes";
    return "No";
}