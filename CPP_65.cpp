string x_str = to_string(x);
    int n = x_str.size();
    shift = shift % n;
    if (shift == 0) {
        return x_str;
    }
    if (shift > n) {
        reverse(x_str.begin(), x_str.end());
        return x_str;
    }
    return x_str.substr(n - shift) + x_str.substr(0, n - shift);
}