bool cycpattern_check(const string& a, const string& b) {
    string c = a + a;
    return c.find(b) != string::npos;
}