sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest = {numbers[0], numbers[1]};
    for (int i = 2; i < numbers.size(); ++i) {
        float diff = numbers[i] - numbers[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            closest = {numbers[i - 1], numbers[i]};
        }
    }
    return {closest.first, closest.second};
}