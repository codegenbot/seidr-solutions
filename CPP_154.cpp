bool cycpattern_check(const string& a, const string& b) {
    string temp = a + a;
    return temp.find(b) != string::npos;
}