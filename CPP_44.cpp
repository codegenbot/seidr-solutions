string res = "";
    while (x > 0) {
        int rem = x % base;
        res = to_string(rem) + res;
        x /= base;
    }
    return res;
}