bool is_nested(string str) {
    int count = 0;
    bool nested = false;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            if (count > 1) {
                nested = true;
            }
            count--;
        }
    }
    return nested;
}