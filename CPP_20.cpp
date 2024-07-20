vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    if (numbers.size() < 2) return result;

    int minDiff = INT_MAX;
    pair<float, float> closestPair;

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) < minDiff) {
                minDiff = abs(numbers[i] - numbers[j]);
                closestPair = make_pair(min(max(numbers[i], numbers[j]), min), max(min(numbers[i], numbers[j]), max));
            }
        }
    }

    result.push_back(closestPair);
    return result;
}