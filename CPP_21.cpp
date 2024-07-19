vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> transformed;
    for (float num : numbers) {
        float new_num = (num - min_val) / (max_val - min_val);
        transformed.push_back(new_num);
    }
    
    return transformed;
}

vector<float> issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return {0.0};
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return {0.0};
        }
    }

    return {1.0};
}