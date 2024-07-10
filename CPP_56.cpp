bool correct_bracketing(string brackets) {
    int open_count = 0;
    for (char bracket : brackets) {
        if (bracket == '<') {
            open_count++;
        } else if (bracket == '>') {
            if (open_count == 0) return false;
            open_count--;
        }
    }
    return open_count == 0;
}