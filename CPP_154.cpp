bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string concat = a + a;
    return concat.find(b) != std::string::npos;
}