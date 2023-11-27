string circular_shift(int x, int shift) {
    string res = to_string(x);
    int len = res.length();
    if (shift > len) {
        reverse(res.begin(), res.end());
    } else {
        shift %= len;
        reverse(res.begin(), res.begin() + len - shift);
        reverse(res.begin() + len - shift, res.end());
        reverse(res.begin(), res.end());
    }
    return res;
}