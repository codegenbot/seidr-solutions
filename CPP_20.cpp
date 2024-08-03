bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    // Add your implementation here
    return {0.0f, 0.0f}; // Placeholder return values
}