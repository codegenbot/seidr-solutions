string circular_shift(int x,int shift){
    string original = to_string(x);
    int n = original.size();
    
    if(shift > n){
        reverse(original.begin(), original.end());
        return original;
    } else {
        shift = shift % n;
        rotate(original.rbegin(), original.rbegin() + shift, original.rend());
        return original;
    }
}