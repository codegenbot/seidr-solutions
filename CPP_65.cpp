string circular_shift(int x, int shift){
    string result = to_string(x);
    int n = result.size();
    if(shift > n){
        reverse(result.begin(), result.end());
    } else {
        shift %= n;
        rotate(result.begin(), result.begin()+n-shift, result.end());
    }
    return result;
}