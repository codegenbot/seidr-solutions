bool cycpattern_check(const string& a, const string& b) {
    string combined = a + a;
    if (combined.find(b) != string::npos) {
        return true;
    }

    return false;
}