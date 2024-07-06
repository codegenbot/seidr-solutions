bool issame(const string &a, const string &b) {
    if (a.length() != b.length())
        return false;
    int aVal = 0, bVal = 0;
    for (int i = 0; i < a.length(); i++) {
        aVal += (int)(a[i] - '0');
        bVal += (int)(b[i] - '0');
    }
    return aVal == bVal;
}