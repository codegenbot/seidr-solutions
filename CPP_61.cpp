bool correct_bracketing(const std::string& brackets) {
    int count = 0;
    for (char bracket : brackets) {
        if (bracket == '(') {
            count++;
        } else {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}