sort(numbers.begin(), numbers.end());
float min_diff = INT_MAX;
pair<float, float> closest_pair;
for (int i = 0; i < numbers.size() - 1; ++i) {
    if (numbers[i + 1] - numbers[i] < min_diff) {
        min_diff = numbers[i + 1] - numbers[i];
        closest_pair.first = numbers[i];
        closest_pair.second = numbers[i + 1];
    }
}
return {closest_pair.first, closest_pair.second};