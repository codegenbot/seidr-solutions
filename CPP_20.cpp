vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    float min_diff = numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                result = {{numbers[i], numbers[j]}};
            } else if (abs(diff) == min_diff) {
                result.push_back({{numbers[i], numbers[j]}});
            }
        }
    }
    
    return result;
}