string circular_shift(int x, int shift) {
    string result = to_string(x);
    int n = result.length();
    
    if (shift > n) {
        reverse(result.begin(), result.end());
        return result;
    }
    
    shift %= n;
    rotate(result.begin(), result.begin() + (n - shift), result.end());
    
    return result;
}