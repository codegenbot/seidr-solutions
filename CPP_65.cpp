string circular_shift(int x, int shift) {
    string s = to_string(x);
    if (shift > s.length()) {
        reverse(s.begin(), s.end());
    } else {
        rotate(s.rbegin(), s.rbegin() + shift, s.rend());
    }
    return s;
}