int is_nested(string str) {
    int depth = 0;
    int max_depth = 0;
    
    for (char c : str) {
        if (c == '[') {
            depth++;
            max_depth = max(max_depth, depth);
        } else if (c == ']') {
            depth--;
        }
    }
    
    return max_depth >= 2;
}