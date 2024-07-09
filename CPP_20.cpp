vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    vector<pair<float, float>> result;

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = abs(numbers[j] - numbers[i]);
            if (diff < min_diff) {
                min_diff = diff;
                result = {{numbers[i], numbers[j]}};
            } else if (diff == min_diff) {
                result.push_back({numbers[i], numbers[j]});
            }
        }
    }

    sort(result.begin(), result.end());

    return result;
}