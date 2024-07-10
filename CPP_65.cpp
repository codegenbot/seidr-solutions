string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;
    else {
        string result = str.substr(shift) + str.substr(0, shift);
        return result;
    }
}