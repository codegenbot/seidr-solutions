std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> result = v;
    std::sort(result.begin(), result.end());
    return result;
}