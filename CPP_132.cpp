bool is_nested(string str) {
    int balance = 0;
    bool nested = false;

    for (char ch : str) {
        if (ch == '[') {
            balance++;
        } else if (ch == ']') {
            if (balance > 1) {
                nested = true;
            }
            balance--;
        }
    }
    return nested;
}