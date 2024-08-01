string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int digit = x % base;
        if (digit < 10)
            res = to_string(digit) + res;
        else
            res = 'A' + (digit - 10) + res;
        x /= base;
    }
    return res;
}