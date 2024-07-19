float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    float range = max_num - min_num;
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / range;
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}