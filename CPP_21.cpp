bool issame(float a, float b) {
    return abs(a - b) < 1e-9;
}

vector<float> rescale_to_unit(const vector<float>& numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> scaled_numbers;
    for (float num : numbers) {
        float scaled_num = (num - min_num) / (max_num - min_num);
        scaled_numbers.push_back(scaled_num);
    }
    
    return scaled_numbers;
}