vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        rescaled_numbers.push_back((num - min_num) / (max_num - min_num));
    }
    
    return rescaled_numbers;
}

bool issame(vector<float> v1, vector<float> v2) {
    return v1 == v2;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled = rescale_to_unit(numbers);
    
    return 0;
}