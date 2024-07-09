string match_parens(vector<string> lst) {
    string s1 = lst[0], s2 = lst[1];
    int open = 0, close = 0;
    
    for (char c : s1) {
        if (c == '(') open++;
        else close++;
    }
    
    for (char c : s2) {
        if (c == '(') close++;
        else open++;
    }
    
    return open == close ? "Yes" : "No";
}