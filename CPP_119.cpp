string match_parens(vector<string> lst) {
    int open = 0;
    int close = 0;
    for (const string& str_type : lst) {
        for (char c : str_type) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}