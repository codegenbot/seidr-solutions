float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> result;
    for (float num : numbers) {
        float rescaled = (num - min_val) / (max_val - min_val);
        result.push_back(rescaled);
    }
    
    return result;
}