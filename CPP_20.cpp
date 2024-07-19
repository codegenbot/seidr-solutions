sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair;
    float min_diff = INFINITY;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < min_diff) {
            min_diff = abs(numbers[i] - numbers[i + 1]);
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest_pair.first, closest_pair.second};
}