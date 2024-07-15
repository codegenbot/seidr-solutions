string s = to_string(x);
    int n = s.size();
    shift = shift % n;
    if (shift == 0) {
        return s;
    }
    if (shift > n) {
        reverse(s.begin(), s.end());
        return s;
    }
    reverse(s.begin(), s.end());
    reverse(s.begin(), s.begin() + shift);
    reverse(s.begin() + shift, s.end());
    return s;
}