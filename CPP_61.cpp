bool correct_bracketing(const string &brackets) {
    int cnt = 0;
    for (char c : brackets) {
        if (c == '(') {
            cnt++;
        } else if (c == ')') {
            if (cnt == 0) {
                return false;
            }
            cnt--;
        }
    }
    return cnt == 0;
}