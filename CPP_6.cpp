vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            int depth = 1;
            while (paren_string.find('(', paren_string.find('(') + 1) != string::npos) {
                paren_string.erase(paren_string.find('('), 1);
                depth++;
            }
            max_depth = max(max_depth, depth);
        } else if (c == ')') {
            int depth = 0;
            while (paren_string.find(')', 0) != string::npos) {
                size_t pos = paren_string.find(')');
                paren_string.erase(0, pos + 1);
                depth++;
            }
            result.push_back(max_depth - depth);
            max_depth = 0;
        }
    }
    return result;
}