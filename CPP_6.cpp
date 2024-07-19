vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            depths.push_back(depth);
        } else if (c == ')') {
            depth--;
        }
    }
    return depths;
}