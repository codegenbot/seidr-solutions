bool is_nested(string str) {
    int depth = 0;
    for (char ch : str) {
        if (ch == '[') {
            depth++;
        } else if (ch == ']') {
            depth--;
        }
        if (depth > 1) {
            return true;
        }
    }
    return false;
}