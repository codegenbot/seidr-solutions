vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = FLT_MAX;
    float num1 = 0, num2 = 0;
    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = fabs(numbers[i] - numbers[i - 1]);
        if (diff < min_diff) {
            min_diff = diff;
            num1 = numbers[i - 1];
            num2 = numbers[i];
        }
    }
    return {num1, num2};
}