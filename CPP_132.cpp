bool is_nested(string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else close++;
        if (open < close) return false;
    }
    return open > 0;
}