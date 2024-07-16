vector<int> depths;
    int max_depth = 0;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            max_depth = max(max_depth, depth);
        } else if (c == ')') {
            depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            depth = 0;
        }
    }
    depths.push_back(max_depth);
    return depths;
}