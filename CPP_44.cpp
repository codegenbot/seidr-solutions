string change_base(int x, int base) {
    string res = "";
    while(x > 0) {
        int rem = x % base;
        if(rem < 10)
            res = (char)(48 + rem) + res;
        else
            res = (char)(55) + res; // for 10 and 11
        x /= base;
    }
    return res;
}