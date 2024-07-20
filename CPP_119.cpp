string match_parens(vector<string> lst){
    int open = 0;
    for (auto s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') open--;
        }
    }
    return open == 0 ? "Yes" : "No";
}