bool correct_bracketing(string brackets) {
    int balance = 0;
    for (char c : brackets) {
        if (c == '(') {
            balance++;
        } else {
            balance--;
        }
        if (balance < 0) {
            return false;
        }
    }
    return balance == 0;
}