string res = "";
    while (x > 0) {
        int remainder = x % base;
        res = to_string(remainder) + res;
        x /= base;
    }
    return res;
}