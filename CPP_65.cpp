string s = to_string(x);
    int n = s.size();
    shift %= n;
    if (shift == 0) return s;
    reverse(s.begin(), s.end());
    reverse(s.begin(), s.begin() + n - shift);
    reverse(s.begin() + n - shift, s.end());
    return s;
}