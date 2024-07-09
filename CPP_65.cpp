string num = to_string(x);
    int n = num.length();
    shift = shift % n;
    if (shift == 0) {
        return num;
    }
    if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    }
    string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}