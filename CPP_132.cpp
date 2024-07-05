bool is_nested(string str) {
    int balance = 0;
    bool has_nested = false;
    for (char c : str) {
        if (c == '[') {
            balance++;
        } else if (c == ']') {
            balance--;
            if (balance > 0) {
                has_nested = true;
            }
        }
        if (balance < 0) {
            balance = 0;
        }
    }
    return has_nested;
}