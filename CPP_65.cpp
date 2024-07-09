string circular_shift(int x, int shift) {
    string s = to_string(x);
    int n = s.size();
    shift %= n;
    return s.substr(n - shift) + s.substr(0, n - shift);
}