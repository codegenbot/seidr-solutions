float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> scaled_numbers;
    for (float num : numbers) {
        float scaled_num = (num - min_val) / (max_val - min_val);
        scaled_numbers.push_back(scaled_num);
    }
    
    return scaled_numbers;
}