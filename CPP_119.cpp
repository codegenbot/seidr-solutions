string match_parens(vector<string> lst) {
    string s1 = lst[0], s2 = lst[1];
    auto is_balanced = [](const string& s) {
        int count = 0;
        for(char c : s) {
            if(c == '(') count++;
            else if(c == ')') {
                count--;
                if(count < 0) return false;
            }
        }
        return count == 0;
    };
    return (is_balanced(s1 + s2) || is_balanced(s2 + s1)) ? "Yes" : "No";
}