bool cycpattern_check(const string& a, const string& b) {
    if (a.length() != b.length()) return false;
    string temp = a + a;
    return temp.find(b) != string::npos;
}