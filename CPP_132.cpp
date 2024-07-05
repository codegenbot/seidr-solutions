bool is_nested(string str) {
    int n = str.size();
    int depth = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i] == '[') {
            depth++;
        } else {
            depth--;
        }
        if (depth > 1) {
            return true;
        }
    }
    return false;
}