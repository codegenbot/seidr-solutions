sort(numbers.begin(), numbers.end());
pair<float, float> closest = {numbers[0], numbers[1]};
for (size_t i = 1; i < numbers.size() - 1; ++i) {
    if (numbers[i + 1] - numbers[i] < closest.second - closest.first) {
        closest = {numbers[i], numbers[i + 1]};
    }
}
return {closest.first, closest.second};