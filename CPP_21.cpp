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
    // Call the functions as needed
    return 0;
}