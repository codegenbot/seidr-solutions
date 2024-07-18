string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int len = num_str.size();
    shift %= len;

    if (shift == 0) {
        return num_str;
    } else if (shift > len / 2) {
        reverse(num_str.begin(), num_str.end());
        return num_str;
    } else {
        string shifted_str = num_str.substr(len - shift) + num_str.substr(0, len - shift);
        return shifted_str;
    }
}