string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int n_digits = num_str.length();
    
    shift %= n_digits;
    if (shift == 0) {
        return num_str;
    } else {
        return num_str.substr(n_digits - shift) + num_str.substr(0, n_digits - shift);
    }
}