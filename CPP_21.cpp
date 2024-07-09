float find_min(const vector<float>& numbers) {
    float min_val = numbers[0];
    for (const auto& num : numbers) {
        min_val = min(min_val, num);
    }
    return min_val;
}

float find_max(const vector<float>& numbers) {
    float max_val = numbers[0];
    for (const auto& num : numbers) {
        max_val = max(max_val, num);
    }
    return max_val;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = find_min(numbers);
    float max_val = find_max(numbers);
    
    vector<float> rescaled;
    for (const auto& num : numbers) {
        float rescaled_num = (num - min_val) / (max_val - min_val);
        rescaled.push_back(rescaled_num);
    }
    
    return rescaled;
}