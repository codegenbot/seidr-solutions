sort(numbers.begin(), numbers.end());
    float min_diff = INFINITY;
    pair<float, float> closest_elements;
    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] - numbers[i - 1] < min_diff) {
            min_diff = numbers[i] - numbers[i - 1];
            closest_elements = make_pair(numbers[i - 1], numbers[i]);
        }
    }
    return {closest_elements.first, closest_elements.second};
}