bool issame(vector<float> a, vector<float> b) {
    float min_val = *min_element(b.begin(), b.end());
    float max_val = *max_element(b.begin(), b.end());
    
    vector<float> result;
    for (float num : a) {
        float scaled_num = (num - min_val) / (max_val - min_val);
        result.push_back(scaled_num);
    }
    
    return result;
}

bool assert_issame(vector<float> expected, vector<float> actual) {
    if (expected.size() != actual.size()) {
        return false;
    }
    for (int i = 0; i < expected.size(); i++) {
        if (abs(expected[i] - actual[i]) > 1e-6) {
            return false;
        }
    }
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> result;
    for (float num : numbers) {
        float scaled_num = (num - min_val) / (max_val - min_val);
        result.push_back(scaled_num);
    }
    
    return result;
}

int main() {
    assert(assert_issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
  
    return 0;
}