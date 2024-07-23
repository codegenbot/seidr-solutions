vector<int> parse_nested_parens(string paren_string) {
    vector<int> levels;
    int current_level = 0;
    int max_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_level++;
            max_level = max(max_level, current_level);
        } else if (c == ')') {
            current_level--;
        } else if (c == ' ') {
            levels.push_back(max_level);
            // Reset max_level for the next group
            max_level = 0;
        }
    }
    levels.push_back(max_level);

    return levels;
}