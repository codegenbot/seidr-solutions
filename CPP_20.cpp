vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    float num1 = 0, num2 = 0;
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        float diff = fabs(numbers[i + 1] - numbers[i]);
        if (diff < min_diff) {
            min_diff = diff;
            num1 = numbers[i];
            num2 = numbers[i + 1];
        }
    }
    return {num1, num2};
}