sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    float min_diff = abs(numbers[0] - numbers[1]);
    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        float diff = abs(numbers[i] - numbers[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest_pair.first, closest_pair.second};
}