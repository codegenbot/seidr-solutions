bool cycpattern_check(const string& a, const string& b) {
    string temp = b + b;
    return (temp.find(a) != string::npos);
}