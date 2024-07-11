vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int maxDepth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            maxDepth++;
        } else if (c == ')') {
            maxDepth--;
        }
        result.push_back(maxDepth);
    }
    return result;
}