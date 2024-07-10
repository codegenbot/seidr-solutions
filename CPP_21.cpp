float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> scaled;
    for (float num : numbers) {
        float rescaled = (num - min_val) / (max_val - min_val);
        scaled.push_back(rescaled);
    }
    
    return scaled;
}