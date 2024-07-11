Here is the solution:

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10) {
            res.insert(0, 1, (remainder - 9) + 'A');
        } else {
            res.insert(0, 1, remainder + '0');
        }
        x /= base;
    }
    return res;
}