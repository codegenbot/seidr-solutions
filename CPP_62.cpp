std::vector<float> derivative(const std::vector<float>& xs){
    if (xs.size() < 2) {
        return {};
    }
    
    std::vector<float> result;
    for (size_t i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    
    return result;
}