bool issame(const std::vector<float>& vector_a, const std::vector<float>& vector_b) {
    return vector_a.size() == vector_b.size() && std::equal(vector_a.begin(), vector_a.end(), vector_b.begin());
}