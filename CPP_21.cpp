vector<float> rescaled_numbers(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

int main() {
    vector<float> result = rescaled_numbers({12.0, 11.0, 15.0, 13.0, 14.0});
    
    for (float num : result) {
        cout << num << " ";
    }
    
    return 0;
}