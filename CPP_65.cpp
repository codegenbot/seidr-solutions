string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int n = num_str.size();
    shift = shift % n;
    if (shift == 0) return num_str;
    if (shift > n / 2) reverse(num_str.begin(), num_str.end());
    else rotate(num_str.rbegin(), num_str.rbegin() + shift, num_str.rend());
    return num_str;
}