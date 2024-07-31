string s = to_string(x);
    int n = s.size();
    shift %= n;
    if (shift == 0) {
        return s;
    }
    if (shift > n) {
        reverse(s.begin(), s.end());
        return s;
    }
    string result = s.substr(n - shift) + s.substr(0, n - shift);
    return result;
}