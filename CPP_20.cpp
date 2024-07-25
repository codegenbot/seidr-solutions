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