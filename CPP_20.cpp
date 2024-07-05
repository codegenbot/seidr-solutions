vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    pair<float, float> closest_pair;
    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = numbers[i] - numbers[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i - 1], numbers[i]};
        }
    }
    return {closest_pair.first, closest_pair.second};
}