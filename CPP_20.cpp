vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    float minDiff = numeric_limits<float>::max();
    pair<float, float> closest;

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) < minDiff) {
                minDiff = abs(numbers[i] - numbers[j]);
                closest = {numbers[i], numbers[j]};
            }
        }
    }

    result.push_back(closest);
    return vector<pair<float, float>>({{closest.first, closest.second}});
}