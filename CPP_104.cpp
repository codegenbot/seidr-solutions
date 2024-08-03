bool issame(const std::unordered_set<int>& a, const std::unordered_set<int>& b) {
    for (int digit : b) {
        if (a.count(digit)) {
            return true;
        }
    }
    return false;
}