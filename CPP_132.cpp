bool is_nested(string str) {
    int open = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') {
            if (!open) return false;
            open--;
        }
    }
    return open > 1;
}