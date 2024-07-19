string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int n = num_str.length();
    
    if (shift > n) {
        reverse(num_str.begin(), num_str.end());
    } else {
        shift %= n;
        rotate(num_str.rbegin(), num_str.rbegin() + shift, num_str.rend());
    }
    
    return num_str;
}