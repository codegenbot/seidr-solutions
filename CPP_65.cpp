string circular_shift(int x, int shift){
    string s = to_string(x);
    int n = s.size();
    shift = shift % n;
    if(shift == 0) return s;
    if(shift > n) return string(s.rbegin(), s.rend());
    return s.substr(n - shift) + s.substr(0, n - shift);
}