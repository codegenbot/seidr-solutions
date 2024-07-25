bool is_same_vector(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}