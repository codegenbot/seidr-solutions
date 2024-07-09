bool is_nested(string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') {
            open++;
        } else if (c == ']') {
            close++;
            if (open > 0) {
                open--;
            }
        }
    }
    return open > 0 && close > open;
}