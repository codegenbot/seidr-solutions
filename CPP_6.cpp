vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int curr_depth = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            curr_depth++;
        } else if (c == ')') {
            depths.push_back(curr_depth);
            curr_depth--;
        }
    }
    
    return depths;
}