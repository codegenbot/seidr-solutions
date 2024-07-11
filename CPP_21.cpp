bool issame(vector<float>& numbers1, vector<float>& numbers2) {
    return numbers1 == numbers2;
}

vector<float> rescale_to_unit(vector<float>& numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    vector<float> rescaled;
    
    for (float num : numbers) {
        float scaled = (num - min_val) / (max_val - min_val);
        rescaled.push_back(scaled);
    }
    
    return rescaled;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled = rescale_to_unit(numbers);
    
    assert(issame(rescaled, rescale_to_unit(numbers)));
    
    return 0;
}