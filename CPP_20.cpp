sort(numbers.begin(), numbers.end());
pair<float, float> closestPair = {numbers[0], numbers[1]};
float minDiff = numbers[1] - numbers[0];

for (int i = 1; i < numbers.size() - 1; ++i) {
    float diff = numbers[i + 1] - numbers[i];
    if (diff < minDiff) {
        minDiff = diff;
        closestPair = {numbers[i], numbers[i + 1]};
    }
}

return {closestPair.first, closestPair.second};
}