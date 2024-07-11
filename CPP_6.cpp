vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int count = 0, max_count = 0;
    for (char &c : paren_string) {
        if (c == '(') {
            count++;
            max_count = max(max_count, count);
        } else if (c == ')') {
            count--;
        } else if (c == ' ') {
            result.push_back(max_count);
            max_count = 0;
            count = 0;
        }
    }
    result.push_back(max_count);
    return result;
}