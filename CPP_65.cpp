string circular_shift(int x, int shift) {
    string result = to_string(x);
    int n = result.size();
    
    if (shift > n) {
        // Reverse the digits
        reverse(result.begin(), result.end());
    } else {
        // Circular shift the digits right
        rotate(result.begin(), result.begin() + (n - shift), result.end());
    }
    
    return result;
}