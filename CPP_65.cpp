string num = to_string(x);
    int n = num.size();
    shift %= n;
    if (shift == 0) {
        return num;
    }
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    reverse(num.begin(), num.end());
    reverse(num.begin(), num.begin() + shift);
    reverse(num.begin() + shift, num.end());
    return num;
}