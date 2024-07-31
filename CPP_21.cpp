bool issame(vector<float> a, vector<float> b) {
    float min_num = *min_element(a.begin(), a.end());
    float max_num = *max_element(a.begin(), a.end());
    float range = max_num - min_num;
    
    vector<float> result;
    for (float num : a) {
        float scaled_num = (num - min_num) / range;
        result.push_back(scaled_num);
    }
    
    return result == b;
}