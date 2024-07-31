bool issame(const vector<float>& vec1, const vector<float>& vec2) {
    return vec1 == vec2;
}

vector<float> rescale_to_unit(const vector<float>& numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> result;
    for (float num : numbers) {
        float scaled_num = (num - min_val) / (max_val - min_val);
        result.push_back(scaled_num);
    }
    
    return result;
}