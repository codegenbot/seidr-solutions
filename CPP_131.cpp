int digits(int n) {
    int product = 1;
    string s = to_string(n);
    for (char c : s) {
        if (c - '0' % 2 != 0)
            product *= (c - '0');
    }
    return product;
}