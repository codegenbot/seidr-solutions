string circular_shift(int x, int shift) {
    string x_str = to_string(x);
    int n = x_str.size();
    shift %= n;
    if (shift == 0) {
        return x_str;
    } else {
        string result = x_str.substr(n - shift) + x_str.substr(0, n - shift);
        return result;
    }
}