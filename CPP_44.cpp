string result = "";
    if (x == 0) return "0";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}