int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') {
            open++;
        } else if (c == ']' && open > 0) {
            open--;
            close++;
        }
    }
    return open > 0 && close > 0;
}