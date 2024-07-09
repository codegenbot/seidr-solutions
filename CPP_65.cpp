std::string circular_shift(int x, int shift) {
    std::string s = std::to_string(x);
    int n = s.size();
    shift %= n;
    if (shift == 0) {
        return s;
    } else {
        return s.substr(n - shift) + s.substr(0, n - shift);
    }
}