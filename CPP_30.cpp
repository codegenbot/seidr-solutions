std::vector<float> get_positive(const std::vector<float>& input) {
    std::vector<float> positive_values;

    for (float val : input) {
        if (val > 0) {
            positive_values.push_back(val);
        }
    }

    return positive_values;
}