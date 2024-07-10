float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    vector<float> scaled_nums;
    for (float num : numbers) {
        float scaled_num = (num - min_num) / (max_num - min_num);
        scaled_nums.push_back(scaled_num);
    }
    return scaled_nums;
}