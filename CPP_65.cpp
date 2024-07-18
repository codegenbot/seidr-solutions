string circular_shift(int x, int shift){
    string res = to_string(x);
    int n = res.size();
    shift = shift % n;
    if(shift == 0){
        return res;
    }
    
    if(shift > n){
        reverse(res.begin(), res.end());
        return res;
    }
    
    rotate(res.rbegin(), res.rbegin() + shift, res.rend());
    return res;
}