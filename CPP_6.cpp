vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int current_depth = 0, max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) max_depth = current_depth;
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            current_depth = 0;
            max_depth = 0;
        }
    }
    result.push_back(max_depth); // For the last group
    return result;
}