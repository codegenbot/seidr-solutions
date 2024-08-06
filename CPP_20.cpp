bool issame(const vector<float>& numbers, float x, float y) {
    return (abs(x - y) < numeric_limits<float>::epsilon() * abs(x + y) ||
           x == y);
}

pair<float, float> find_closest_elements(const vector<float>& numbers) {
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

assert(find_closest_elements({4.5, 2.1, 7.3, 0.9, 6.2}) == make_pair(2.1, 4.5));
```