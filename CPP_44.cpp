string result = "";
    while (x > 0) {
        int rem = x % base;
        result = to_string(rem) + result;
        x /= base;
    }
    return result;
}