string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    
    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    }
    
    shift = shift % n;
    string result = str.substr(n - shift) + str.substr(0, n - shift);
    return result;
}