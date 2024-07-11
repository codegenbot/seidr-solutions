bool cycpattern_check(const string& a, const string& b) {
    if(a.length() != b.length()) return false;
    string combined = a + a;
    return combined.find(b) != string::npos;
}