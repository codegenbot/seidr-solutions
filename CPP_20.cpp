sort(numbers.begin(), numbers.end());
pair<float, float> closest_pair;
float min_diff = numeric_limits<float>::max();
for (int i = 0; i < numbers.size() - 1; ++i) {
    float diff = numbers[i + 1] - numbers[i];
    if (diff < min_diff) {
        min_diff = diff;
        closest_pair = {numbers[i], numbers[i + 1]};
    }
}
return {closest_pair.first, closest_pair.second};