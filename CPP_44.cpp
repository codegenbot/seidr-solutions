string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    if (result == "") {
        result = "0";
    }
    return result;
}