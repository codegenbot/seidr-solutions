bool cycpattern_check(string a, string b) {
    if(a.length() != b.length()) return false;
    std::string s = a + a;
    return s.find(b) != std::string::npos;
}