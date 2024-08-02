bool cycpattern_check(const std::string& a, const std::string& b) {
    std::string temp = a + a;
    return temp.find(b) != std::string::npos;
}