vector<int> depths;
    int current_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > depths.size()) {
                depths.push_back(current_depth);
            }
        } else if (c == ')') {
            current_depth--;
        }
    }
    return depths;
}