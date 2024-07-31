vector<float> rescale_to_unit(const vector<float>& numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

bool issame(const vector<float>& vec1, const vector<float>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    
    for (size_t i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    // Testing if rescaled_numbers is the same as expected result
    vector<float> expected_result = {0.0, 0.25, 0.5, 0.75, 1.0};
    if (issame(rescaled_numbers, expected_result)) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }
    
    return 0;
}