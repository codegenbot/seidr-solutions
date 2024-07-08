std::vector<std::vector<float>> filter_vectors(std::vector<std::vector<float>>& vec) {
    std::vector<std::vector<float>> result;
    for (const auto& v : vec) {
        bool isZero = false;
        float sum = 0.0f;
        for (float f : v) {
            sum += f;
            if (f == 0.0f) isZero = true;
        }
        if (!isZero && sum > 0.0f) {
            result.push_back(v);
        }
    }
    return result;
}