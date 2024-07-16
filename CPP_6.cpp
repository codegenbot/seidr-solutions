vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int cur_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            cur_depth++;
        } else if (c == ')') {
            depths.push_back(cur_depth);
            cur_depth--;
        }
    }
    return depths;
}