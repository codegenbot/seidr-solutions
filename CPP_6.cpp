vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int max_depth = 0, current_depth = 0;
    for (char ch : paren_string) {
        if (ch == '(') {
            current_depth++;
            if (current_depth > max_depth) {
                max_depth = current_depth;
            }
        } else if (ch == ')') {
            current_depth--;
        } else if (ch == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    depths.push_back(max_depth); // for the last group
    return depths;
}