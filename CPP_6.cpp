vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int max_depth = 0;
    int curr_depth = 0;
    
    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            curr_depth++;
            max_depth = max(max_depth, curr_depth);
        } else if (paren_string[i] == ')') {
            curr_depth--;
        }
    }
    
    depths.push_back(max_depth);
    return depths;
}