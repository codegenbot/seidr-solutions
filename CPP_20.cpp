vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    int n = numbers.size();
    
    for (int i = 0; i < n - 1; i++) {
        float min_diff = numeric_limits<float>::max();
        float closest_pair[2];
        
        for (int j = i + 1; j < n; j++) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
        
        result.push_back({closest_pair[0], closest_pair[1]});
    }
    
    return result;
}