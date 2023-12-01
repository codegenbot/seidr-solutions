string match_parens(vector<string> lst) {
    int openCount = 0;
    int closeCount = 0;
    
    for (string str : lst) {
        for (char c : str) {
            if (c == '(') {
                openCount++;
            } else if (c == ')') {
                if (openCount > 0) {
                    openCount--;
                } else {
                    return "No";
                }
            }
        }
    }
    
    if (openCount == 0) {
        return "Yes";
    } else {
        return "No";
    }
}