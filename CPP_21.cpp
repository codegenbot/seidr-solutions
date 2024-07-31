vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

bool issame(vector<float> vec1, vector<float> vec2) {
    return vec1 == vec2;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    // Testing issame function
    vector<float> test_vec = {0.0, 0.25, 0.5, 0.75, 1.0};
    bool equal = issame(rescaled_numbers, test_vec);
    
    return 0;
}