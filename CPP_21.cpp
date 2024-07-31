bool issame(vector<float> a, vector<float> b) {
    float min_num_a = *min_element(a.begin(), a.end());
    float max_num_a = *max_element(a.begin(), a.end());
    float range_a = max_num_a - min_num_a;

    float min_num_b = *min_element(b.begin(), b.end());
    float max_num_b = *max_element(b.begin(), b.end());
    float range_b = max_num_b - min_num_b;

    return min_num_a == min_num_b && max_num_a == max_num_b && range_a == range_b;
}