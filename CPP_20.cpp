vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closestPair = make_pair(numbers[0], numbers[1]);
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[j] - numbers[i]) < abs(closestPair.second - closestPair.first)) {
                closestPair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    return vector<pair<float, float>>({closestPair});
}