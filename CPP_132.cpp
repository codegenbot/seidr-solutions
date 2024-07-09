bool is_nested(string str) {
    int nesting = 0;
    for (char c : str) {
        if (c == '[') {
            nesting++;
        } else if (c == ']') {
            nesting--;
            if (nesting < 0) return true; // found a nested bracket
        }
    }
    return false;
}