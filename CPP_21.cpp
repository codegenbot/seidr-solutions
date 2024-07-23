float find_min(const vector<float>& numbers) {
    return *min_element(numbers.begin(), numbers.end());
}

float find_max(const vector<float>& numbers) {
    return *max_element(numbers.begin(), numbers.end());
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