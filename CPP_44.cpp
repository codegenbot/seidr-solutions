string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int rem = x % base;
        if (rem < 10)
            result = to_string(rem) + result;
        else
            result = 'A' + rem - 10 + result;
        x /= base;
    }
    return result;
}