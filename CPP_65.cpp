string circular_shift(int x, int shift) {
    string str = to_string(x);
    int len = str.length();
    
    if (shift > len) {
        reverse(str.begin(), str.end());
        return str;
    }
    
    shift = shift % len;
    string shifted = str.substr(len - shift) + str.substr(0, len - shift);
    return shifted;
}