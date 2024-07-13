string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder < 10)
            res = to_string(remainder) + res;
        else
            res = "A" + res; // for bases greater than 9
        x /= base;
    }
    return res;
}