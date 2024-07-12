bool issame(vector<float> a, vector<float> b) {
    float min_val = *min_element(a.begin(), a.end());
    float max_val = *max_element(a.begin(), a.end());
    
    vector<float> result;
    for (float num : a) {
        float rescaled_num = (num - min_val) / (max_val - min_val);
        result.push_back(rescaled_num);
    }
    
    return result;
}

assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));