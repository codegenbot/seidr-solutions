string num = to_string(x);
    int len = num.length();
    shift %= len;
    if (shift == 0) return num;
    if (shift > len) {
        reverse(num.begin(), num.end());
        return num;
    }
    rotate(num.begin(), num.begin() + len - shift, num.end());
    return num;
}