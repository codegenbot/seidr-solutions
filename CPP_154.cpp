bool cycpattern_check(const string& a, const string& b) {
    string combined = a + a;
    return combined.find(b) != std::string::npos;
}