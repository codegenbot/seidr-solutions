std::vector<float> derivative(const std::vector<float>& v) {
    if (v.size() < 2) {
        return {};
    }
    
    std::vector<float> result;
    for (size_t i = 1; i < v.size(); ++i) {
        result.push_back(v[i] - v[i - 1]);
    }
    
    return result;
}