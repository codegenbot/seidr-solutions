bool issame(pair<float, float> p1, pair<float, float> p2) {
    return (p1.first == p2.first && p1.second == p2.second) || (p1.first == p2.second && p1.second == p2.first);
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = make_pair(numbers[0], numbers[1]);

    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = make_pair(numbers[i], numbers[i + 1]);
        }
    }

    return {closest_elements.first, closest_elements.second};
}