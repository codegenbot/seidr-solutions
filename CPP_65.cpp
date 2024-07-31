string circular_shift(int x, int shift) {
    string n = to_string(x);
    int sz = n.size();
    shift %= sz;
    if (shift == 0) return n;
    return n.substr(sz - shift) + n.substr(0, sz - shift);
}