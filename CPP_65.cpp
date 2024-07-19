string circular_shift(int x, int shift) {
    string str = to_string(x);
    int len = str.length();
    shift %= len;
    
    if (shift == 0) {
        return str;
    }
    
    if (shift > len) {
        reverse(str.begin(), str.end());
        return str;
    }
    
    string newStr = str.substr(len - shift) + str.substr(0, len - shift);
    return newStr;
}