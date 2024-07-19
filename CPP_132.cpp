bool is_nested(string str) {
    int open = 0;
    for (char c : str) {
        if (c == '[') {
            open++;
        } else if (c == ']') {
            if (open > 1) {
                return true;
            }
            open--;
        }
    }
    return false;
}