bool issame(const pair<float, float>& a, const pair<float, float>& b) {
    return (a.first == b.first && a.second == b.second);
}

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            result = {numbers[i], numbers[i + 1]};
        }
    }
    return {result.first, result.second};
}