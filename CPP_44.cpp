string change_base(int x, int base) {
    if (x == 0) {
        return "0";
    }
    
    string result = "";
    while (x > 0) {
        int digit = x % base;
        result = to_string(digit) + result;
        x /= base;
    }
    
    return result;
}