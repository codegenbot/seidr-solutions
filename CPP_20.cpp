sort(numbers.begin(), numbers.end());
float min_diff = INFINITY;
pair<float, float> result;

for (int i = 0; i < numbers.size() - 1; ++i) {
    if (abs(numbers[i] - numbers[i + 1]) < min_diff) {
        min_diff = abs(numbers[i] - numbers[i + 1]);
        result = make_pair(numbers[i], numbers[i + 1]);
    }
}

return {result.first, result.second};