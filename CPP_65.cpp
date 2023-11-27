string circular_shift(int x, int shift) {
    string str = to_string(x);
    int len = str.length();
    if (shift > len) {
        reverse(str.begin(), str.end());
    } else {
        shift = shift % len;
        rotate(str.begin(), str.begin() + len - shift, str.end());
    }
    return str;
}