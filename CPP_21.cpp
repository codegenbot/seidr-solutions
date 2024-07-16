bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled;
    for (float num : numbers) {
        float scaled_num = (num - min_num) / (max_num - min_num);
        rescaled.push_back(scaled_num);
    }
    
    return rescaled;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    
    // Additional test cases
    // assert(issame(rescale_to_unit({5.0, 10.0, 15.0}), {0.0, 0.5, 1.0}));
    // assert(issame(rescale_to_unit({1.0, 3.0, 7.0, 9.0}), {0.0, 0.25, 0.75, 1.0}));
    
    return 0;
}