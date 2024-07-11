string circular_shift(int x, int shift){
    string s = to_string(x);
    int n = s.size();
    shift = shift % n;
    if(shift == 0){
        return s;
    }
    if(shift > 0){
        reverse(s.begin(), s.end());
        reverse(s.begin(), s.begin() + shift);
        reverse(s.begin() + shift, s.end());
    }
    return s;
}