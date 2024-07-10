bool checkBalance(string s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            if (balance == 0) return false;
            balance--;
        }
    }
    return balance == 0;
}

string match_parens(vector<string> lst) {
    string s1 = lst[0];
    string s2 = lst[1];
    
    if ((checkBalance(s1) && checkBalance(s2)) || 
        (!checkBalance(s1) && !checkBalance(s2))) {
        return "Yes";
    } else {
        return "No";
    }
}