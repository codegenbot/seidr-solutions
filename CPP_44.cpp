string change_base(int x, int base){
    string result = "";
    while(x > 0){
        char digit = '0' + (x % base);
        result = digit + result;
        x /= base;
    }
    return result;
}