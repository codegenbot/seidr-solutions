float find_min(vector<float> numbers) {
    float min_num = numbers[0];
    for (float num : numbers) {
        if (num < min_num) {
            min_num = num;
        }
    }
    return min_num;
}

float find_max(vector<float> numbers) {
    float max_num = numbers[0];
    for (float num : numbers) {
        if (num > max_num) {
            max_num = num;
        }
    }
    return max_num;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = find_min(numbers);
    float max_num = find_max(numbers);
    vector<float> rescaled_numbers;
    
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}