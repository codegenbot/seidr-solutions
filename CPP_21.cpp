vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        rescaled_numbers.push_back((num - min_num) / (max_num - min_num));
    }
    
    return rescaled_numbers;
}

bool issame(vector<float> numbers1, vector<float> numbers2) {
    return numbers1 == numbers2;
}

int main() {
    vector<float> input_numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled_numbers = rescale_to_unit(input_numbers);
    
    vector<float> test_numbers = {0.2, 0.4, 0.6, 0.8, 1.0};
    bool same = issame(rescaled_numbers, test_numbers);
    
    return 0;
}