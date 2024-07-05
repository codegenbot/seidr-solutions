string match_parens(vector<string> lst){
    string a = lst[0], b = lst[1];
    // Function to check if a string is balanced
    auto isBalanced = [](const string& s) -> bool {
        int balance = 0;
        for (char c : s) {
            if (c == '(') balance++;
            else if (c == ')') balance--;
            if (balance < 0) return false;
        }
        return balance == 0;
    };
    // Check both possible concatenations
    if (isBalanced(a + b) || isBalanced(b + a)) {
        return "Yes";
    } else {
        return "No";
    }
}