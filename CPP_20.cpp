vector<float> find_closest_elements(vector<float> numbers);

bool issame(vector<float> a, vector<float> b) {
    vector<float> sorted_a(a.begin(), a.end());
    vector<float> sorted_b(b.begin(), b.end());
    
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());
    
    return sorted_a == sorted_b;
}