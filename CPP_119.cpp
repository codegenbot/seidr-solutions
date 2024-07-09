string match_parens(vector<string> lst) {
    string s1 = lst[0], s2 = lst[1];
    int openCount = 0, closeCount = 0;
    
    for (char c : s1) {
        if (c == '(') openCount++;
        else closeCount++;
    }
    
    for (char c : s2) {
        if (c == '(') openCount--;
        else closeCount--;
    }
    
    return openCount == 0 ? "Yes" : "No";
}