bool correct_bracketing(string brackets) {
    int count = 0;
    for (char ch : brackets) {
        if (ch == '(') {
            count++;
        } else if (ch == ')') {
            if (count == 0) {
                return false;
            }
            count--;
        }
    }
    return count == 0;
}