vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    vector<float> result(2);

    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = fabs(numbers[i] - numbers[i - 1]);
        if (diff < min_diff) {
            min_diff = diff;
            result[0] = numbers[i - 1];
            result[1] = numbers[i];
        }
    }
    return result;
}