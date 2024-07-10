string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.size();
    shift %= n;
    if (shift == 0) {
        return str;
    }
    if (shift > n / 2) {
        reverse(str.begin(), str.end());
    } else {
        rotate(str.begin(), str.begin() + n - shift, str.end());
    }
    return str;
}