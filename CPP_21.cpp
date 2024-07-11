bool issame(vector<float>& a, vector<float>& b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
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
    vector<float> numbers = {5, 10, 15, 20};
    vector<float> rescaled = rescale_to_unit(numbers);
    assert(issame(rescaled, rescaled));
    
    return 0;
}