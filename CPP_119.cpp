bool match_parens(const std::vector<char>& lst) {
    int open = 0, close = 0;
    for (char c : lst) {
        if (c == '(') open++;
        else if (c == ')') close++;
    }
    return (open == 0) && (close == 0);
}