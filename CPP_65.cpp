string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();

    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    }

    shift %= n;
    rotate(str.begin(), str.begin() + n - shift, str.end());
    return str;
}