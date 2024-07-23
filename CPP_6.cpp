vector<int> parse_nested_parens(string paren_string){
    vector<int> res;
    int max_depth = 0;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            max_depth = max(max_depth, depth);
        } else if (c == ')') {
            depth--;
        }
        if (c == ' ') {
            res.push_back(max_depth);
            max_depth = 0;
            depth = 0;
        }
    }
    res.push_back(max_depth);
    return res;
}