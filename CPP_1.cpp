bool issame(std::vector<std::string>& a, std::vector<std::string>& b) {
    if (a.length() != b.length()) return false;
    for (size_t i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}