string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10)
            res.push_back(65 + remainder - 10); // for numbers 10 to 35
        else
            res.push_back('0' + remainder);
        x /= base;
    }
    reverse(res.begin(), res.end());
    return res;
}