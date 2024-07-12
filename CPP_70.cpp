bool issame(std::vector<std::int32_t> a, std::vector<std::int32_t> b) {
    return (a.size() == b.size()) && std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}