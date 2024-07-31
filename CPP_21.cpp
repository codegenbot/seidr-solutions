float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    float range = max_num - min_num;
    
    vector<float> result;
    for (float num : numbers) {
        float scaled_num = (num - min_num) / range;
        result.push_back(scaled_num);
    }
    
    return result;
}