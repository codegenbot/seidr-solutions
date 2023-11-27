string circular_shift(int x, int shift) {
    string num = to_string(x);
    int len = num.length();
    
    if (shift > len) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift = shift % len;
    string result = num.substr(len - shift) + num.substr(0, len - shift);
    return result;
}