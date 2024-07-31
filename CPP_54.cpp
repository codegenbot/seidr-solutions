bool same_chars(const std::string& s0, const std::string& s1) {
    std::string str0 = s0, str1 = s1;
    sort(str0.begin(), str0.end());
    sort(str1.begin(), str1.end());
    return str0 == str1;
}