vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int current_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            depths.push_back(current_depth);
        } else if (c == ')') {
            current_depth--;
        }
    }
    return depths;
}