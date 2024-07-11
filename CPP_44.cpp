string change_base(int x, int base){
    string result = "";
    while(x > 0){
        int digit = x % base;
        result = to_string(digit) + result;
        x /= base;
    }
    return result;
}