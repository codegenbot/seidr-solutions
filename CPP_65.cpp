string circular_shift(int x, int shift) {
    string num = to_string(x);
    int n = num.length();
    if (shift > n) {
        reverse(num.begin(), num.end());
    } else {
        string temp = num.substr(n - shift, shift);
        num.erase(n - shift, shift);
        num = temp + num;
    }
    return num;
}