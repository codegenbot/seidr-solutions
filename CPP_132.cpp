bool is_nested(string str) {
    int open_brackets = 0;
    bool nested = false;

    for (char c : str) {
        if (c == '[') {
            open_brackets++;
            if (open_brackets > 1) {
                nested = true;
            }
        } else if (c == ']') {
            open_brackets--;
        }
    }

    return nested;
}