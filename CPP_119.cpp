Here is the completed code:

string match_parens(vector<string> lst) {
    string first = lst[0];
    string second = lst[1];
    
    int openCount = 0;
    int closeCount = 0;
    
    for (char c : first) {
        if (c == '(') {
            openCount++;
        } else {
            closeCount++;
        }
    }
    
    for (char c : second) {
        if (c == '(') {
            openCount--;
        } else {
            closeCount--;
        }
    }
    
    return openCount == 0 && closeCount == 0 ? "Yes" : "No";
}