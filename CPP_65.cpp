string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    shift = shift % n;

    if (shift == 0) {
        return num;
    } else if (shift > n) {
        reverse(num.begin(), num.end());
        return num;
    } else {
        string shifted = num.substr(n - shift) + num.substr(0, n - shift);
        return shifted;
    }
}