bool issame(vector<float> a, vector<float> b) {
    vector<float> even_indices;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            even_indices.push_back(a[i]);
        }
    }
    sort(even_indices.begin(), even_indices.end());

    int even_index = 0;
    vector<float> result;
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_indices[even_index]);
            even_index++;
        } else {
            result.push_back(a[i]);
        }
    }

    return result;
}