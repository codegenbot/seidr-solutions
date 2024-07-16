string change_base(int x, int base) {
    if(x == 0) {
        return "0";
    }
    string result = "";
    while(x > 0) {
        int remainder = x % base;
        result = to_string(remainder) + result;
        x /= base;
    }
    return result;
}