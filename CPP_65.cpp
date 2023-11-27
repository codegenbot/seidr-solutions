string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.size();
    
    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    }
    
    shift %= n;
    string shifted = str.substr(n - shift) + str.substr(0, n - shift);
    return shifted;
}