vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int max_level = 0;
    int curr_level = 0;
    for (char c : paren_string) {
        if (c == '(') {
            curr_level++;
            max_level = max(max_level, curr_level);
        } else if (c == ')') {
            curr_level--;
        } else if (c == ' ') {
            result.push_back(max_level);
            max_level = 0;
            curr_level = 0;
        }
    }
    result.push_back(max_level);

    return result;
}