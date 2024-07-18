float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled;
    for (float num : numbers) {
        float rescaled_num = (num - min_val) / (max_val - min_val);
        rescaled.push_back(rescaled_num);
    }
    
    return rescaled;
}