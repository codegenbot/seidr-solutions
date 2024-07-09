vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int count = 0;
    int max_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            max_count = max(max_count, count);
            count--;
        }
    }

    return result;
}