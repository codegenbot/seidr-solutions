sort(numbers.begin(), numbers.end());
    float minDiff = numbers[1] - numbers[0];
    pair<float, float> closestPair = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < minDiff) {
            minDiff = numbers[i + 1] - numbers[i];
            closestPair = {numbers[i], numbers[i + 1]};
        }
    }
    return {closestPair.first, closestPair.second};
}