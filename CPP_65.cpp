string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    
    if (shift > n) {
        reverse(str.begin(), str.end());
        return str;
    }
    
    rotate(str.rbegin(), str.rbegin() + shift, str.rend());
    return str;
}