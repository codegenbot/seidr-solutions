bool issame(const string& s) {
    bool found = false;
    int count = 0;

    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) {
                found = true;
                break;
            }
        }
    }

    return found;
}