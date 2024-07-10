bool is_nested(std::string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == ']') close++;
        else if (c == '[') {
            if (close > 0) close--;
            else open++;
        }
    }
    return close > 0 && open == 0;
}