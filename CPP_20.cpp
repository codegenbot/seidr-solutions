bool issame(float a, float b) {
    return (fabs(a - b) < 0.0001);
}

pair<float, float> find_closest_elements(const vector<float>& numbers);

int main() {
    vector<float> test_numbers = {1.2, 4.5, 2.2, 0.8, 5.1};
    pair<float, float> result = find_closest_elements(test_numbers);
    assert(issame(result.first, 4.5));
    assert(issame(result.second, 5.1));
    return 0;
}

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    float num1 = numbers[0], num2 = numbers[1];
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            num1 = numbers[i];
            num2 = numbers[i + 1];
        } else if (issame(numbers[i + 1] - numbers[i], min_diff)) {
            if (numbers[i] < num1) {
                num1 = numbers[i];
                num2 = numbers[i + 1];
            }
        }
    }
    return {num1, num2};
}