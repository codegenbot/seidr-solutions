string match_parens(vector<string> lst) {
    string s1 = lst[0];
    string s2 = lst[1];
    
    auto is_good = [](const string& str) {
        int balance = 0;
        for (char ch : str) {
            if (ch == '(') balance++;
            else balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };

    if (is_good(s1 + s2) || is_good(s2 + s1)) {
        return "Yes";
    } else {
        return "No";
    }
}