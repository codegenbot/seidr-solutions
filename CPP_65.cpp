string circular_shift(int x, int shift){
    string s = to_string(x);
    int n = s.size();
    if(shift > n){
        reverse(s.begin(), s.end());
        return s;
    }
    shift %= n;
    rotate(s.rbegin(), s.rbegin() + shift, s.rend());
    return s;
}