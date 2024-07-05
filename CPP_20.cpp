vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float minDiff = fabs(numbers[1] - numbers[0]);
    vector<float> closest_pair = {numbers[0], numbers[1]};
    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        float diff = fabs(numbers[i + 1] - numbers[i]);
        if (diff < minDiff) {
            minDiff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    return closest_pair;
}