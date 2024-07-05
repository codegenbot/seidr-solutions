string match_parens(vector<string> lst) {
    string a = lst[0], b = lst[1];
    string combined1 = a + b;
    string combined2 = b + a;
    
    auto isBalanced = [](const string& s) {
        int balance = 0;
        for (char ch : s) {
            if (ch == '(') balance++;
            else if (ch == ')') balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };
    
    if (isBalanced(combined1) || isBalanced(combined2)) {
        return "Yes";
    }
    return "No";
}