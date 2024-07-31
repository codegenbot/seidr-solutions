bool issame(const std::vector<float> &a, const std::vector<float> &b) {
    return a == b;
}

std::pair<const float, const float> find_closest_elements(const std::vector<float> &numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<const float, const float> result = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = {numbers[i], numbers[i + 1]};
        }
    }
    return {result.first, result.second};
}