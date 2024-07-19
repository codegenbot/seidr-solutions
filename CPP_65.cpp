string circular_shift(int x, int shift){
    string s = to_string(x);
    shift %= s.size();
    if(shift == 0)
        return s;
    reverse(s.begin(), s.end());
    reverse(s.begin(), s.begin() + shift);
    reverse(s.begin() + shift, s.end());
    return s;
}