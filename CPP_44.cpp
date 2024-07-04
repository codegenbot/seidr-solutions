string change_base(int x, int base) {
    if (x == 0) return "0";
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}