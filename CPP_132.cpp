bool is_nested(string str) {
    int depth = 0;
    bool nested = false;
    for (char c : str) {
        if (c == '[') {
            depth++;
            if (depth > 1) nested = true;
        } else if (c == ']') {
            depth--;
        }
    }
    return nested;
}