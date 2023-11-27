string circular_shift(int x, int shift) {
    string intStr = to_string(x); // Convert integer to string
    int n = intStr.length(); // Number of digits
    
    // If shift > number of digits, return digits reversed
    if (shift > n) {
        reverse(intStr.begin(), intStr.end());
        return intStr;
    }
    
    // Circular shift the digits right by shift
    reverse(intStr.begin(), intStr.end());
    reverse(intStr.begin(), intStr.begin()+shift);
    reverse(intStr.begin()+shift, intStr.end());
    
    return intStr;
}