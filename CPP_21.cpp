bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = numbers[0];
    float max_val = numbers[0];
    for (float num : numbers) {
        if (num < min_val) {
            min_val = num;
        }
        if (num > max_val) {
            max_val = num;
        }
    }
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_val) / (max_val - min_val);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

int main() {
    // Test case
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    vector<float> expected_rescaled_numbers = {0.0, 0.25, 0.5, 0.75, 1.0};
    
    bool result = issame(rescaled_numbers, expected_rescaled_numbers);
    
    return 0;
}