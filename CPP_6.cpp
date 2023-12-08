```
vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int max_level = 0, level = 0;
    for (char c : paren_string) {
        if (c == '(') {
            level++;
            max_level = max(max_level, level);
        } else if (c == ')') {
            level--;
        }
    }
    result.push_back(max_level);
    return result;
}
```