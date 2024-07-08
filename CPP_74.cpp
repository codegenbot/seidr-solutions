bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!issame(a[i], b[i])) // assuming you want to compare strings too
            return false;
    }
    return true;
}