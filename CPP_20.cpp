vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    vector<float> closest_pair(2);

    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = numbers[i] - numbers[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair[0] = numbers[i - 1];
            closest_pair[1] = numbers[i];
        }
    }

    return closest_pair;
}