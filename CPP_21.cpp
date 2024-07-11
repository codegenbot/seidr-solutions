bool issame(float a, float b) {
    return abs(a - b) < 1e-9;
}

vector<float> rescale_to_unit(vector<float> numbers) {
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
    
    assert(issame(rescaled[0], 0.00));
    assert(issame(rescaled[1], 0.25));
    assert(issame(rescaled[2], 0.50));
    assert(issame(rescaled[3], 0.75));
    assert(issame(rescaled[4], 1.00));
    
    return 0;
}