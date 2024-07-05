bool is_nested(string str) {
    int depth = 0, max_depth = 0;
    for (char ch : str) {
        if (ch == '[') {
            depth++;
            if (depth > max_depth) {
                max_depth = depth;
            }
        } else if (ch == ']') {
            depth--;
        }
    }
    return max_depth > 1;
}