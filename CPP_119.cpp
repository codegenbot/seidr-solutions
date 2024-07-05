string match_parens(vector<string> lst){
    auto isBalanced = [](const string& s) {
        int balance = 0;
        for (char ch : s) {
            if (ch == '(') balance++;
            else balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };

    if (isBalanced(lst[0] + lst[1]) || isBalanced(lst[1] + lst[0])) return "Yes";
    return "No";
}