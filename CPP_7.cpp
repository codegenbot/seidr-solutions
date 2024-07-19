```bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return same(a, b);
}

int main() {
    assert(same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}