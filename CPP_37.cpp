bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> even_indices;
    vector<float> sorted_even_indices;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(l[i]);
            sorted_even_indices.push_back(l[i]);
        }
    }
    
    sort(sorted_even_indices.begin(), sorted_even_indices.end());
    
    int sorted_even_idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_indices[sorted_even_idx];
            sorted_even_idx++;
        }
    }
    
    return l;
}

int main() {
    vector<float> input = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    vector<float> expected_output = {1, 1, 2, 1, 3, 9, 3, 6, 4, 5};
    
    vector<float> result = sort_even(input);
    
    assert(issame(result, expected_output));
    
    return 0;
}