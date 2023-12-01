string circular_shift(int x, int shift) {
    string s = to_string(x);
    int n = s.size();
    shift %= n;
    if (shift == 0) {
        return s;
    }
    string temp = s.substr(n - shift);
    temp += s.substr(0, n - shift);
    return temp;
}