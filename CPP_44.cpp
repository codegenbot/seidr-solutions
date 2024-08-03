string change_base(int x, int base) {
    if (x < base) {
        return to_string(x);
    }
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}