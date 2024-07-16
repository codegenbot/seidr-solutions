string s = to_string(x);
    int n = s.size();
    shift %= n;
    if (shift == 0) {
        return s;
    }
    if (shift > n / 2) {
        reverse(s.begin(), s.end());
        return s;
    }
    rotate(s.rbegin(), s.rbegin() + shift, s.rend());
    return s;
}