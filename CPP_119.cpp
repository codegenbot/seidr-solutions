std::string match_parens(std::string s) {
    int open = 0, close = 0;
    for (char c : s) {
        if (c == '(') open++;
        else close++;
    }
    return (open == close) ? "Yes" : "No";
}