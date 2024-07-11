string circular_shift(int x, int shift){
    string str = to_string(x);
    int n = str.size();
    
    if(shift > n){
        reverse(str.begin(), str.end());
        return str;
    }
    
    shift %= n;
    rotate(str.rbegin(), str.rbegin() + shift, str.rend());
    
    return str;
}