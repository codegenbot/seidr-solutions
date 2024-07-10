float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    vector<float> result;
    for (float num : numbers) {
        float scaled_num = (num - min_num) / (max_num - min_num);
        result.push_back(scaled_num);
    }
    return result;
}