string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int rem = x % base;
        result = char(rem + '0') + result;
        x /= base;
    }
    return result;
}