```
vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int level = 0;
    for (char c : paren_string) {
        if (c == '(') {
            level++;
        } else if (c == ')') {
            level--;
        }
        if (level > 0 && result.empty()) {
            result.push_back(level);
        }
    }
    return result;
}
```