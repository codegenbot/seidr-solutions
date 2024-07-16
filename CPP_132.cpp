int n = str.size();
    int open = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '[') {
            open++;
        } else if (str[i] == ']' && open > 0) {
            open--;
        }
    }
    return n > 1 && open > 0;
}