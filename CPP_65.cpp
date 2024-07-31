string circular_shift(int x, int shift) {
    string numStr = to_string(x);
    int n = numStr.size();
    shift = shift % n;
    if (shift == 0) {
        return numStr;
    }
    if (shift > n / 2) {
        reverse(numStr.begin(), numStr.end());
    } else {
        rotate(numStr.rbegin(), numStr.rbegin() + shift, numStr.rend());
    }
    return numStr;
}