bool issame(const string& a, const string& b) {
    if (a.length() != b.length())
        return false;
    for (int i = 0; i < a.length(); ++i)
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    return true;
}