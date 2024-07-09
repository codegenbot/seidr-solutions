float min_num = numbers[0], max_num = numbers[0];
    
    for (float num : numbers) {
        if (num < min_num) min_num = num;
        if (num > max_num) max_num = num;
    }
    
    float diff = max_num - min_num;
    vector<float> result;
    
    for (float num : numbers) {
        result.push_back((num - min_num) / diff);
    }
    
    return result;
}