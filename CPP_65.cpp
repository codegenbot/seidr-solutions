string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    shift = shift % n;
    reverse(num.begin(), num.begin() + shift);
    reverse(num.begin() + shift, num.end());
    reverse(num.begin(), num.end());
    return num;
}