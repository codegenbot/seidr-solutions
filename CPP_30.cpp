bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return checkSame(a, get_positive(a)) && checkSame(get_positive(b), b);
}