string change_base(int x, int base) {
    if (x == 0)
        return "0";
    string res = "";
    while (x > 0) {
        int r = x % base;
        res.insert(0, 1, r % 10 + '0');
        x /= base;
    }
    return res;
}