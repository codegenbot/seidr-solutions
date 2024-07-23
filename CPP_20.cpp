sort(numbers.begin(), numbers.end());
float min_diff = numbers[1] - numbers[0];
pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
for (int i = 1; i < numbers.size() - 1; ++i) {
    if (numbers[i + 1] - numbers[i] < min_diff) {
        min_diff = numbers[i + 1] - numbers[i];
        closest_pair = make_pair(numbers[i], numbers[i + 1]);
    }
}
return {closest_pair.first, closest_pair.second};