bool is_same(vector<float> a, vector<float> b) {
    return a[0] == b[0] && a[1] == b[1];
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair;
    float min_diff = numbers[1] - numbers[0];

    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_pair.first = numbers[i];
            closest_pair.second = numbers[i + 1];
        }
    }

    return {closest_pair.first, closest_pair.second};
}