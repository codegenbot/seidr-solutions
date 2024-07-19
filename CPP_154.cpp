bool cycpattern_check(const string& a, const string& b) {
    string concat = a + a;
    return concat.find(b) != string::npos;
}