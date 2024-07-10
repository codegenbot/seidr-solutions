string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.size();
    shift %= n;
    if (shift == 0) {
        return num;
    }
    if (shift > n / 2) {
        reverse(num.begin(), num.end());
    } else {
        rotate(num.rbegin(), num.rbegin() + shift, num.rend());
    }
    return num;
}