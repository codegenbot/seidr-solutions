bool issame(vector<float> v1, vector<float> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    
    for (size_t i = 0; i < v1.size(); ++i) {
        if (fabs(v1[i] - v2[i]) > 1e-6) {
            return false;
        }
    }
    
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        rescaled_numbers.push_back((num - min_num) / (max_num - min_num));
    }
    
    return rescaled_numbers;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    
    // rest of the code
    
    return 0;
}