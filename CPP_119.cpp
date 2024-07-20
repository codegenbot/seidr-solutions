string match_parens(vector<string> lst) {
    int open = 0;
    for (int i = 0; i < lst[0].size(); i++) {
        if (lst[0][i] == '(') open++;
        else if (open > 0) open--;
    }
    int close = 0;
    for (int i = 0; i < lst[1].size(); i++) {
        if (lst[1][i] == ')') close++;
        else if (close > 0) close--;
    }
    return (open + close) % 2 == 0 ? "Yes" : "No";
}