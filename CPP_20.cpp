sort(numbers.begin(), numbers.end());
pair<float, float> closest_pair;
float min_diff = numeric_limits<float>::max();
for (int i = 0; i < numbers.size() - 1; ++i) {
    if (numbers[i + 1] - numbers[i] < min_diff) {
        min_diff = numbers[i + 1] - numbers[i];
        closest_pair.first = numbers[i];
        closest_pair.second = numbers[i + 1];
    }
}
return {closest_pair.first, closest_pair.second};