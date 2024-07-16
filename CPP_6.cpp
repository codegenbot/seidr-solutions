vector<int> parse_nested_parens(string paren_string) {
    vector<int> results;
    int max_depth = 0;
    int current_depth = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            results.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    
    results.push_back(max_depth);

    return results;
}