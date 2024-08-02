string change_base(int x, int base) {
    string res = "";
    while(x > 0) {
        int r = x % base;
        if(r < 10)
            res = to_string(r) + res;
        else
            res = (char)(r + 'A' - 1) + res;
        x /= base;
    }
    return res;
}