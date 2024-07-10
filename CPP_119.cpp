bool match_parens(vector<string> lst) {
    int openCount = 0;
    for (string str : lst) {
        for (char c : str) {
            if (c == '(') {
                openCount++;
            } else {
                if (openCount > 0) {
                    openCount--;
                } else {
                    return false;
                }
            }
        }
    }
    return openCount == 0;
}