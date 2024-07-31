string str = to_string(x);
    int n = str.size();
    shift = shift % n;
    if (shift == 0) {
        return str;
    }
    if (n < shift) {
        reverse(str.begin(), str.end());
        return str;
    }
    rotate(str.rbegin(), str.rbegin() + shift, str.rend());
    return str;
}