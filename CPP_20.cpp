```c++
bool operator==(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (std::abs(diff) < min_diff) {
                min_diff = std::abs(diff);
                closest = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return {closest};
}