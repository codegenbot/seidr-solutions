bool correct_bracketing(std::string brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if (bracket == '(') {
            count++;
        } else if (bracket == ')') {
            if (count < 1) return false;
            count--;
        }
    }
    return count == 0;
}