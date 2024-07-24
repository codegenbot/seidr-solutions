bool cycpattern_check(const std::string& a, const std::string& b) {
    return (a + a).find(b) != std::string::npos;
}