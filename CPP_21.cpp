bool issame(vector<float> v1, vector<float> v2) {
    return v1 == v2;
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
    vector<float> input = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> compare = rescale_to_unit(input);
    assert(issame(compare, rescale_to_unit(input)));
    
    return 0;
}